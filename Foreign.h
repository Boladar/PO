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
    Foreign( const string &name, int numberOfEmployees, int numberOfParkingSpaces,
            const string &website, const string &countryOfOrigin, const string &officialLanguage);
    Foreign();
protected:
public:
    const string &getCountryOfOrigin() const;

    const string &getOfficialLanguage() const;

    void print() override;

protected:
    string officialLanguage;
};


#endif //PO_FOREIGN_H
