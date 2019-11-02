//
// Created by aleks on 02.11.2019.
//

#ifndef PO_FOREIGN_H
#define PO_FOREIGN_H


#include "Private.h"

class Foreign : public Private {
protected:
    string countryOfOrigin;
protected:
public:
    Foreign(time_t creationTine, int id, const string &name, int numberOfEmployees, int numberOfParkingSpaces,
            const string &website, const string &countryOfOrigin, const string &officialLanguage);

protected:
public:
    const string &getCountryOfOrigin() const;

    const string &getOfficialLanguage() const;

protected:
    string officialLanguage;
};


#endif //PO_FOREIGN_H
