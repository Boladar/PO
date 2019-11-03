//
// Created by aleks on 02.11.2019.
//

#ifndef PO_INSTITUTION_H
#define PO_INSTITUTION_H

#include "DatabaseElement.h"
#include <string>

class Institution : public DatabaseElement{
protected:
public:
    Institution(const string &name, int numberOfEmployees);

    Institution();

    const string &getName() const;

    int getNumberOfEmployees() const;

    void print() override;

protected:
    string name;
private:
    int numberOfEmployees;
};


#endif //PO_INSTITUTION_H
