//
// Created by Boladar on 29.10.2019.
//

#ifndef PO_PERSON_H
#define PO_PERSON_H

#include <string>
#include "DatabaseElement.h"

class Person : public DatabaseElement{
public:
    Person(std::string surname, std::string name);
    Person();
private:
    std::string surname;
protected:
    std::string name;
public:
    void print() override;

    void save(fstream &file) override;
};


#endif //PO_PERSON_H
