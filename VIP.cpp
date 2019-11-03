//
// Created by Boladar on 29.10.2019.
//

#include <iostream>
#include <fstream>
#include "VIP.h"


VIP::VIP() : Person() {

}

void VIP::print() {
    Person::print();
    cout << securityLevel <<" | " <<favouriteCar << " | " << endl;
}

void VIP::save(fstream &file) {
    Person::save(file);
    file << securityLevel << favouriteCar << "\n";
}
