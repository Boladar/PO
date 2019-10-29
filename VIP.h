//
// Created by Boladar on 29.10.2019.
//

#ifndef PO_VIP_H
#define PO_VIP_H


#include "Person.h"

class VIP : public Person {
public:
    VIP(int id, std::string name);
protected:
    int ImportanceLevel;
};


#endif //PO_VIP_H
