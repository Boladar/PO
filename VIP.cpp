//
// Created by Boladar on 29.10.2019.
//

#include <iostream>
#include "VIP.h"

VIP::VIP(const std::string &surname, const std::string &name, int securityLevel,
         const std::string &favouriteCar) : Person(surname, name), securityLevel(securityLevel),
                                            favouriteCar(favouriteCar) {}

int VIP::getSecurityLevel() const {
    return securityLevel;
}

const std::string &VIP::getFavouriteCar() const {
    return favouriteCar;
}

VIP::VIP() : Person() {

}

void VIP::print() {
    Person::print();
    cout << securityLevel <<" | " <<favouriteCar << " | " << endl;
}
