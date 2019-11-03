//
// Created by aleks on 02.11.2019.
//

#include <iostream>
#include "Foreign.h"

Foreign::Foreign( const string &name, int numberOfEmployees, int numberOfParkingSpaces,
                 const string &website, const string &countryOfOrigin, const string &officialLanguage) : Private(
       name, numberOfEmployees, numberOfParkingSpaces, website), countryOfOrigin(countryOfOrigin),
                                                                                                         officialLanguage(
                                                                                                                 officialLanguage) {}

const string &Foreign::getCountryOfOrigin() const {
    return countryOfOrigin;
}

const string &Foreign::getOfficialLanguage() const {
    return officialLanguage;
}

Foreign::Foreign()  : Private(){

}

void Foreign::print() {
    Private::print();
    cout << " | countryOfOrigin : " << countryOfOrigin << " | officialLanguage : " << officialLanguage;
}
