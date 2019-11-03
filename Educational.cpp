//
// Created by aleks on 02.11.2019.
//

#include "Educational.h"

Educational::Educational( const string &name, int numberOfEmployees,
                         int nationalOwnershipPercentage, const string &submitter, const string &voivodeship,
                         int airPollutionIndicator, int numberOfStudents, const string &principalName) : Polish(
         name, numberOfEmployees, nationalOwnershipPercentage, submitter, voivodeship,
        airPollutionIndicator), numberOfStudents(numberOfStudents), principalName(principalName) {}

int Educational::getNumberOfStudents() const {
    return numberOfStudents;
}

const string &Educational::getPrincipalName() const {
    return principalName;
}

Educational::Educational() : Polish(){

}
