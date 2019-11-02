//
// Created by Boladar on 29.10.2019.
//

#include "Person.h"

Person::Person(time_t creationTine, int id, std::string surname, std::string name) : DatabaseElement(
        creationTine, id), surname(surname), name(name) {}

const std::string &Person::getSurname() const {
    return surname;
}

const std::string &Person::getName() const {
    return name;
}
