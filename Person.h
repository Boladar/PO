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
    const std::string &getSurname() const;

    void print() override;

    const std::string &getName() const;
};


#endif //PO_PERSON_H
