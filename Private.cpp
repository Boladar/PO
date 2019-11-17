//
// Created by aleks on 02.11.2019.
//

#include <iostream>
#include "Private.h"

Private::Private() : Institution(){}

void Private::print() {
    cout << " | numberOfParkingSpaces : " << numberOfParkingSpaces << " | website : " << website;
}

void Private::save(fstream &file) {
    file << numberOfParkingSpaces << " " << website << " ";
}

void Private::read(istream &input) {
    input >> numberOfParkingSpaces >> website;
}
