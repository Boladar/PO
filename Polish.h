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
    Polish(const string &name, int numberOfEmployees, int nationalOwnershipPercentage,
           const string &submitter, const string &voivodeship, int airPollutionIndicator);
    Polish();

    void print() override;

private:
    int airPollutionIndicator;
};


#endif //PO_POLISH_H
