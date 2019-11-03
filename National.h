//
// Created by aleks on 02.11.2019.
//

#ifndef PO_NATIONAL_H
#define PO_NATIONAL_H


#include "Institution.h"

class National : public virtual Institution{
protected:
    string nationalOwnershipPercentage;
private:
    string submitter;
public:
    National();
    void print() override;
};


#endif //PO_NATIONAL_H
