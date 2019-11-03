//
// Created by Boladar on 29.10.2019.
//

#include "VIP.h"

VIP::VIP(time_t creationTine, int id, const std::string &surname, const std::string &name, int securityLevel,
         const std::string &favouriteCar) : Person(creationTine, id, surname, name), securityLevel(securityLevel),
                                            favouriteCar(favouriteCar) {}

int VIP::getSecurityLevel() const {
    return securityLevel;
}

const std::string &VIP::getFavouriteCar() const {
    return favouriteCar;
}

VIP::VIP() : Person() {

}
