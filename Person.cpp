//
// Created by Boladar on 29.10.2019.
//

#include <iostream>
#include <fstream>
#include "Person.h"

Person::Person(std::string surname, std::string name) : DatabaseElement(), surname(surname), name(name) {}

Person::Person() : DatabaseElement() {
    name = "";
    surname = "";
}

void Person::print() {
    DatabaseElement::print();
    cout << " | name:  " << name <<" | surname: "<<surname;
}

void Person::save(fstream &file) {
    DatabaseElement::save(file);
    file << name <<" " << surname << " ";

}

void Person::read(istream &input) {
    input>> name >> surname;
}
