//
// Created by aleks on 02.11.2019.
//

#include <iostream>
#include "National.h"

National::National(const string &name, int numberOfEmployees,
                   int nationalOwnershipPercentage, const string &submitter) : Institution( name,
                                                                                           numberOfEmployees),
                                                                               nationalOwnershipPercentage(
                                                                                       nationalOwnershipPercentage),
                                                                               submitter(submitter) {}

National::National() : Institution() {

}

void National::print() {
    Institution::print();
    cout << " | nationalOwnershipPercentage : " << nationalOwnershipPercentage << " | submitter : " << submitter;
}
