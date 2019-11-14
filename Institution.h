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
    Institution();

    void print() override;

    void save(fstream &file) override;

    void read(istream &input) override;

protected:
    string name;
private:
    string numberOfEmployees;
};


#endif //PO_INSTITUTION_H
