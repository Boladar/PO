//
// Created by aleks on 02.11.2019.
//

#ifndef PO_ENTERPRISE_H
#define PO_ENTERPRISE_H


#include "Polish.h"
#include "Foreign.h"

class Enterprise : public Polish, public Foreign{
protected:
    string industryName;
private:
    string CEO;
public:
    Enterprise();
    void print() override;

    void save(fstream &file) override;

    void read(istream &input) override;
};


#endif //PO_ENTERPRISE_H
