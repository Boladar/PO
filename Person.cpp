//
// Created by Boladar on 29.10.2019.
//

#include "Person.h"

Person::Person(int id,std::string name) : DatabaseElement(id) {
    this->name = name;
}
