//
// Created by Boladar on 29.10.2019.
//

#ifndef PO_PERSON_H
#define PO_PERSON_H

#include <string>
#include "DatabaseElement.h"

class Person : public DatabaseElement{
public:
    Person(int id, std::string name);

protected:
    std::string name;
};


#endif //PO_PERSON_H
