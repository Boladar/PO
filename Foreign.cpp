//
// Created by aleks on 02.11.2019.
//

#include "Foreign.h"

Foreign::Foreign(time_t creationTine, int id, const string &name, int numberOfEmployees, int numberOfParkingSpaces,
                 const string &website, const string &countryOfOrigin, const string &officialLanguage) : Private(
        creationTine, id, name, numberOfEmployees, numberOfParkingSpaces, website), countryOfOrigin(countryOfOrigin),
                                                                                                         officialLanguage(
                                                                                                                 officialLanguage) {}

const string &Foreign::getCountryOfOrigin() const {
    return countryOfOrigin;
}

const string &Foreign::getOfficialLanguage() const {
    return officialLanguage;
}