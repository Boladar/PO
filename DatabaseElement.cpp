//
// Created by Boladar on 29.10.2019.
//

#include <iostream>
#include "DatabaseElement.h"

DatabaseElement::DatabaseElement(time_t creationTine, int id) :
creationTine(creationTine),
id(id) {}

time_t DatabaseElement::getCreationTine() {
    return creationTine;
}

int DatabaseElement::getId(){
    return id;
}

void DatabaseElement::Print() {
    cout << id << ", ";
}

