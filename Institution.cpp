//
// Created by aleks on 02.11.2019.
//

#include <iostream>
#include "Institution.h"

Institution::Institution() : DatabaseElement(){}

void Institution::print() {
    DatabaseElement::print();
    cout << " | name : " << name << " | numberOfEmployees : " << numberOfEmployees;
}

