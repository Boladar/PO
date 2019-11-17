#include <iostream>

#include "VIP.h"
#include "Worker.h"
#include "Institution.h"
#include "National.h"
#include "Polish.h"
#include "Service.h"
#include "Educational.h"
#include "Private.h"
#include "Foreign.h"
#include "Enterprise.h"
#include "DatabaseLeaf.h"

#include <map>
#include <sstream>
#include <iterator>

int main() {
    setlocale(LC_ALL, "En_US");

    auto* enterprise = new DatabaseLeaf<Enterprise>();
    auto* educational = new DatabaseLeaf<Educational>();
    auto* service = new DatabaseLeaf<Service>();

    auto* foreign =new DatabaseCategory<Foreign>(enterprise);
    auto* polish = new DatabaseCategory<Polish>(service,educational, enterprise);

    auto* privateInstitution = new DatabaseCategory<Private>(foreign);
    auto* national = new DatabaseCategory<National>(polish);

    auto* institution = new DatabaseCategory<Institution>(national, privateInstitution);

    auto* worker = new DatabaseLeaf<Worker>();
    auto* vip = new DatabaseLeaf<VIP>();

    auto* person = new DatabaseCategory<Person>(vip,worker);

    auto* element = new DatabaseCategory<DatabaseElement>(person,institution);

    Category* current = element;
    map<string,Category*> databaseDictionary;

    databaseDictionary.insert(pair<string,Category*>("DatabaseElement",element));
    databaseDictionary.insert(pair<string,Category*>("Person",person));
    databaseDictionary.insert(pair<string,Category*>("VIP",vip));
    databaseDictionary.insert(pair<string,Category*>("Worker",worker));
    databaseDictionary.insert(pair<string,Category*>("Institution",institution));
    databaseDictionary.insert(pair<string,Category*>("National",national));
    databaseDictionary.insert(pair<string,Category*>("Polish",polish));
    databaseDictionary.insert(pair<string,Category*>("Service",service));
    databaseDictionary.insert(pair<string,Category*>("Educational",educational));
    databaseDictionary.insert(pair<string,Category*>("Private",privateInstitution));
    databaseDictionary.insert(pair<string,Category*>("Foreign",foreign));
    databaseDictionary.insert(pair<string,Category*>("Enterprise",enterprise));


    while(true){
        string input;

        cin.clear();
        fflush(stdin);

        getline(cin,input);

        istringstream iss(input);
        vector<string> parsedInput(istream_iterator<string>{iss},istream_iterator<string>());

        string command = parsedInput[0];
        fstream file;

        if(command == "CD"){
            string requestedDirectory = parsedInput[1];

            cout << "cur: " << requestedDirectory;
            current = databaseDictionary.at(requestedDirectory);

            current->printName(2);

        }else if(command == "MO"){

            int newID = current->createObject();
            if(newID != -1 ){
                current->ModifyObject(newID);
            }

        }else if(command == "DO"){

            current->DeleteObject(stoi(parsedInput[1]));

        }else if(command == "MDO"){

            current->ModifyObject(stoi(parsedInput[1]));

        }else if(command == "DIR"){
            current->printChildrenNames(0);
        }else if(command == "SHOW"){

            current->ShowObject(stoi(parsedInput[1]));

        }else if(command == "SAVE"){

            file.open(parsedInput[1], fstream::out);
            if(file.good()){
                for(auto const&[key,val] : databaseDictionary){
                    val->Save(file);
                }
            }

            file.close();

        }else if(command == "READ"){

            file.open(parsedInput[1], fstream::in);
            if(file.good()){
                string name;
                int numberOfEntries;

                while(!file.eof()) {
                    file >> name >> numberOfEntries;

                    Category* readCategory = databaseDictionary.at(name);
                    readCategory->Read(file,numberOfEntries);

                }
            }

            file.close();

        }else if( command == "TREE"){
            Category * root = element;
            root->printChildrenNames(0);
        }else if( command == "EXIT"){
            break;
        }else{
            cout << "unknown command " << command << endl;
        }

    }


    return 0;

}