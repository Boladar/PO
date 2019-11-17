//
// Created by aleks on 02.11.2019.
//

#include "Enterprise.h"
#include <iostream>

Enterprise::Enterprise() : Polish(), Foreign(){

}

void Enterprise::print() {
    Polish::print();
    Foreign::print();
    cout << "| industryName : " << industryName << " | CEO: " << CEO << endl;
}

void Enterprise::save(fstream &file) {
    Polish::save(file);
    Foreign::save(file);

    file << industryName << " " << CEO << endl;
}

void Enterprise::read(istream &input) {
    Polish::read(input);
    Foreign::read(input);

    input >> industryName >> CEO;
}
