//
// Created by Boladar on 29.10.2019.
//

#ifndef PO_VIP_H
#define PO_VIP_H


#include "Person.h"

class VIP : public Person {
public:

    VIP();
protected:
    string securityLevel;
private:
    std::string favouriteCar;
public:
    void print() override;

    void save(fstream &file) override;
};


#endif //PO_VIP_H
