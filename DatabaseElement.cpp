//
// Created by Boladar on 29.10.2019.
//

#include "DatabaseElement.h"

DatabaseElement::DatabaseElement(time_t creationTine, int id) :
creationTine(creationTine),
id(id) {}

time_t DatabaseElement::getCreationTine() const {
    return creationTine;
}

int DatabaseElement::getId() const {
    return id;
}

