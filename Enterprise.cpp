//
// Created by aleks on 02.11.2019.
//

#include "Enterprise.h"

Enterprise::Enterprise() : Polish(), Foreign() {

}

void Enterprise::print() {
    Foreign::print();
}

void Enterprise::save(fstream &file) {
    Polish::save(file);
}

void Enterprise::read(istream &input) {
    Polish::read(input);
}
