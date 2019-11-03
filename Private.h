//
// Created by aleks on 02.11.2019.
//

#ifndef PO_PRIVATE_H
#define PO_PRIVATE_H


#include "Institution.h"

class Private : public virtual Institution {
protected:
    int numberOfParkingSpaces;
private:
    string website;
public:
    Private( const string &name, int numberOfEmployees, int numberOfParkingSpaces,
            const string &website);
    Private();

    int getNumberOfParkingSpaces() const;

    const string &getWebsite() const;

    void print() override;
};


#endif //PO_PRIVATE_H
