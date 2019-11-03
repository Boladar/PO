//
// Created by aleks on 02.11.2019.
//

#ifndef PO_NATIONAL_H
#define PO_NATIONAL_H


#include "Institution.h"

class National : public Institution{
protected:
    int nationalOwnershipPercentage;
private:
    string submitter;
public:
    National(time_t creationTine, int id, const string &name, int numberOfEmployees, int nationalOwnershipPercentage,
             const string &submitter);
    National();
};


#endif //PO_NATIONAL_H
