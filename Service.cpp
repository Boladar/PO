//
// Created by aleks on 02.11.2019.
//

#include <iostream>
#include <fstream>
#include "Service.h"

Service::Service() : Polish(){

}

void Service::print() {
    Polish::print();
    cout << " | typeOfService : " << typeOfService << " | target : " << target << endl;
}

void Service::save(fstream &file) {
    Polish::save(file);
    file << typeOfService<< " " << target << endl;
}

void Service::read(istream &input) {
    Polish::read(input);
    input >> typeOfService >> target;
}
