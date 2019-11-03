//
// Created by aleks on 02.11.2019.
//

#include <iostream>
#include "Polish.h"

Polish::Polish( const string &name, int numberOfEmployees, int nationalOwnershipPercentage,
               const string &submitter, const string &voivodeship, int airPollutionIndicator) : National( name,
                                                                                                         numberOfEmployees,
                                                                                                         nationalOwnershipPercentage,
                                                                                                         submitter),
                                                                                                voivodeship(
                                                                                                        voivodeship),
                                                                                                airPollutionIndicator(
                                                                                                        airPollutionIndicator) {}

Polish::Polish() : National(){

}

void Polish::print() {
    Institution::print();
    cout << " | voivodeship : " << voivodeship << " | airPollutionIndicator : " << airPollutionIndicator;
}
