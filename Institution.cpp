//
// Created by aleks on 02.11.2019.
//

#include "Institution.h"

Institution::Institution(time_t creationTine, int id, const string &name, int numberOfEmployees) : DatabaseElement(
        creationTine, id), name(name), numberOfEmployees(numberOfEmployees) {}

const string &Institution::getName() const {
    return name;
}

int Institution::getNumberOfEmployees() const {
    return numberOfEmployees;
}
