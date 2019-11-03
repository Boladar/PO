//
// Created by aleks on 02.11.2019.
//

#ifndef PO_POLISH_H
#define PO_POLISH_H


#include "National.h"

class Polish : public National{
protected:
    string voivodeship;
public:
    Polish();
    void print() override;

private:
    string airPollutionIndicator;
};


#endif //PO_POLISH_H
