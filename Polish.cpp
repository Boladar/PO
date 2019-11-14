//
// Created by aleks on 02.11.2019.
//

#include <iostream>
#include <fstream>
#include "Polish.h"


Polish::Polish() : National(){

}

void Polish::print() {
    National::print();
    cout << " | voivodeship : " << voivodeship << " | airPollutionIndicator : " << airPollutionIndicator;
}

void Polish::save(fstream &file) {
    National::save(file);
    file << voivodeship << " " << airPollutionIndicator << " ";
}

void Polish::read(istream &input) {
    National::read(input);
    input >> voivodeship >> airPollutionIndicator;
}
