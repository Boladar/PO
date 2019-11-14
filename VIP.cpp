//
// Created by Boladar on 29.10.2019.
//

#include <iostream>
#include <fstream>
#include "VIP.h"


VIP::VIP() : Person() {
    securityLevel = "";
    favouriteCar = "";
}

void VIP::print() {
    Person::print();
    cout << " | securityLeveL : "<<securityLevel <<" | favouriteCar: " << favouriteCar << endl;
}

void VIP::save(fstream &file) {
    Person::save(file);
    file << securityLevel<< " " << favouriteCar << endl;
}

void VIP::read(istream &input) {
    Person::read(input);

    string SsecurityLevel, SfavouriteCar;
    input >> SsecurityLevel >> SfavouriteCar;

    securityLevel = SsecurityLevel;
    favouriteCar = SfavouriteCar;
}
