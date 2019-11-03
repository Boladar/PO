//
// Created by aleks on 02.11.2019.
//

#include <iostream>
#include "Institution.h"

Institution::Institution(const string &name, int numberOfEmployees) : DatabaseElement(), name(name), numberOfEmployees(numberOfEmployees) {}

Institution::Institution() : DatabaseElement(){}

const string &Institution::getName() const {
    return name;
}

void Institution::print() {
    DatabaseElement::print();
    cout << " | name : " << name << " | numberOfEmployees : " << numberOfEmployees;
}

int Institution::getNumberOfEmployees() const {
    return numberOfEmployees;
}
