//
// Created by Boladar on 29.10.2019.
//

#ifndef PO_VIP_H
#define PO_VIP_H


#include "Person.h"

class VIP : public Person {
public:
    VIP(time_t creationTine, int id, const std::string &surname, const std::string &name, int securityLevel,
        const std::string &favouriteCar);
    VIP();
protected:
    int securityLevel;
private:
    std::string favouriteCar;
public:
    int getSecurityLevel() const;

    const std::string &getFavouriteCar() const;
};


#endif //PO_VIP_H
