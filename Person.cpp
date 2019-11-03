//
// Created by Boladar on 29.10.2019.
//

#include <iostream>
#include "Person.h"

Person::Person(std::string surname, std::string name) : DatabaseElement(), surname(surname), name(name) {}

const std::string &Person::getSurname() const {
    return surname;
}

const std::string &Person::getName() const {
    return name;
}

Person::Person() : DatabaseElement() {}

void Person::print() {
    DatabaseElement::print();
    cout << " | name:  " << name <<" | surname: "<<surname;
}
