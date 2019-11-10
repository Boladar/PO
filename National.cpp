//
// Created by aleks on 02.11.2019.
//

#include <iostream>
#include <fstream>
#include "National.h"

National::National() : Institution() {

}
void National::print() {
    Institution::print();
    cout << " | nationalOwnershipPercentage : " << nationalOwnershipPercentage << " | submitter : " << submitter;
}

void National::save(fstream &file) {
    Institution::save(file);
    file << nationalOwnershipPercentage<< " " << submitter << " ";
}
