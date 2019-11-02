//
// Created by aleks on 02.11.2019.
//

#ifndef PO_PRIVATE_H
#define PO_PRIVATE_H


#include "Institution.h"

class Private : public Institution {
protected:
    int numberOfParkingSpaces;
private:
    string website;
public:
    Private(time_t creationTine, int id, const string &name, int numberOfEmployees, int numberOfParkingSpaces,
            const string &website);

    int getNumberOfParkingSpaces() const;

    const string &getWebsite() const;
};


#endif //PO_PRIVATE_H
