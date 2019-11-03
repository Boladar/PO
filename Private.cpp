//
// Created by aleks on 02.11.2019.
//

#include "Private.h"

Private::Private(time_t creationTine, int id, const string &name, int numberOfEmployees, int numberOfParkingSpaces,
                 const string &website) : Institution(creationTine, id, name, numberOfEmployees),
                                          numberOfParkingSpaces(numberOfParkingSpaces), website(website) {}
Private::Private() : Institution(){}

int Private::getNumberOfParkingSpaces() const {
    return numberOfParkingSpaces;
}

const string &Private::getWebsite() const {
    return website;
}
