//
// Created by aleks on 02.11.2019.
//

#include "Educational.h"

Educational::Educational(time_t creationTine, int id, const string &name, int numberOfEmployees,
                         int nationalOwnershipPercentage, const string &submitter, const string &voivodeship,
                         int airPollutionIndicator, int numberOfStudents, const string &principalName) : Polish(
        creationTine, id, name, numberOfEmployees, nationalOwnershipPercentage, submitter, voivodeship,
        airPollutionIndicator), numberOfStudents(numberOfStudents), principalName(principalName) {}

int Educational::getNumberOfStudents() const {
    return numberOfStudents;
}

const string &Educational::getPrincipalName() const {
    return principalName;
}
