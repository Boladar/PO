//
// Created by aleks on 02.11.2019.
//

#ifndef PO_POLISH_H
#define PO_POLISH_H


#include "National.h"

class Polish : public virtual National{
protected:
    string voivodeship;
public:
    Polish();
    void print() override;

    void save(fstream &file) override;

    void read(istream &input) override;

private:
    string airPollutionIndicator;
};


#endif //PO_POLISH_H
