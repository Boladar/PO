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
    auto* enterprise = new DatabaseCategory<Enterprise>();
    auto* educational = new DatabaseCategory<Educational>();
    auto* service = new DatabaseCategory<Service>();

    auto* foreign =new DatabaseCategory<Foreign>(enterprise);
    auto* polish = new DatabaseCategory<Polish>(service,educational, enterprise);

    auto* privateInstitution = new DatabaseCategory<Private>(foreign);
    auto* national = new DatabaseCategory<National>(polish);

    auto* institution = new DatabaseCategory<Institution>(national, privateInstitution);

    auto* worker = new DatabaseCategory<Worker>();
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
        getline(cin,input);

        istringstream iss(input);
        vector<string> parsedInput(istream_iterator<string>{iss},istream_iterator<string>());

        string command = parsedInput[0];

        if(command == "CD"){
            string requestedDirectory = parsedInput[1];

            cout << "cur: " << requestedDirectory;
            current = databaseDictionary.at(requestedDirectory);

            current->printName(2);

        }else if(command == "MO"){

            current->createObject();

        }else if(command == "DO"){

            current->DeleteObject(stoi(parsedInput[1]));

        }else if(command == "MDO"){

            current->ModifyObject(stoi(parsedInput[1]));

        }else if(command == "DIR"){
            current->printChildrenNames(0);
        }else if(command == "SHOW"){

            current->ShowObject(stoi(parsedInput[1]));

        }else if(command == " SAVE"){

        }else if(command == "READ"){

        }else if( command == "TREE"){
            Category * root = element;
            root->printChildrenNames(0);
        }else if( command == "EXIT"){
            break;
        }

    }


    return 0;

}