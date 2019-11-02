//
// Created by Boladar on 29.10.2019.
//

#include "Person.h"

Person::Person(time_t creationTine, int id, std::string surname, std::string name) : DatabaseElement(
        creationTine, id), surname(surname), name(name) {}
