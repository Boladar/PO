//
// Created by aleks on 02.11.2019.
//

#include "Enterprise.h"

Enterprise::Enterprise() : Polish(){

}

void Enterprise::print() {
    Foreign::print();
}

void Enterprise::save(fstream &file) {
    Polish::save(file);
}
