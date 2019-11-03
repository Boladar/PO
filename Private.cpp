//
// Created by aleks on 02.11.2019.
//

#include <iostream>
#include "Private.h"

Private::Private() : Institution(){}

void Private::print() {
    Institution::print();
    cout << " | numberOfParkingSpaces : " << numberOfParkingSpaces << " | website : " << website;
}
