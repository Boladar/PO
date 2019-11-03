#include <iostream>

#include "DatabaseCategory.h"
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

#include <map>

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
    auto* vip = new DatabaseCategory<VIP>();

    auto* person = new DatabaseCategory<Person>(vip,worker);

    auto* element = new DatabaseCategory<DatabaseElement>(person,institution);

    Category* current = element;
    map<string,Category*> databaseDictionary;

    databaseDictionary["DatabaseElement"] = element;
    databaseDictionary["Person"] = person;
    databaseDictionary["VIP"] = vip;
    databaseDictionary["Worker"] = worker;
    databaseDictionary["Institution"] = institution;
    databaseDictionary["National"] = national;
    databaseDictionary["Polish"] = polish;
    databaseDictionary["Service"] = service;
    databaseDictionary["Educational"] = educational;
    databaseDictionary["Private"] = privateInstitution;
    databaseDictionary["Foreign"] = foreign;
    databaseDictionary["Enterprise"] = enterprise;

    while(true){
        string input;
        getline(cin,input);

        string command = input.substr(0, input.find(" "));

        if(command == "CD"){
            string requestedDirectory = input.substr(1, input.find(" "));

            cout << "cur" << requestedDirectory;
            current = databaseDictionary[requestedDirectory];

        }else if(command == "MO"){

        }else if(command == "DO"){

        }else if(command == "MDO"){

        }else if(command == "DIR"){
            current->printChildrenNames(0);
        }else if(command == "SHOW"){

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