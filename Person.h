//
// Created by Boladar on 29.10.2019.
//

#ifndef PO_PERSON_H
#define PO_PERSON_H

#include <string>
#include "DatabaseElement.h"

class Person : public DatabaseElement{
public:
    Person(time_t creationTine, int id, std::string surname, std::string name);

private:
    std::string surname;
protected:
    std::string name;
public:
    const std::string &getSurname() const;

    const std::string &getName() const;
};


#endif //PO_PERSON_H
