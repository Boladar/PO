//
// Created by aleks on 02.11.2019.
//

#include <iostream>
#include "Private.h"

Private::Private(const string &name, int numberOfEmployees, int numberOfParkingSpaces,
                 const string &website) : Institution( name, numberOfEmployees),
                                          numberOfParkingSpaces(numberOfParkingSpaces), website(website) {}
Private::Private() : Institution(){}

int Private::getNumberOfParkingSpaces() const {
    return numberOfParkingSpaces;
}

const string &Private::getWebsite() const {
    return website;
}

void Private::print() {
    Institution::print();
    cout << " | numberOfParkingSpaces : " << numberOfParkingSpaces << " | website : " << website;
}
