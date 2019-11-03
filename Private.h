//
// Created by aleks on 02.11.2019.
//

#ifndef PO_PRIVATE_H
#define PO_PRIVATE_H


#include "Institution.h"

class Private : public virtual Institution {
protected:
    string numberOfParkingSpaces;
private:
    string website;
public:
    Private();
    void print() override;
};


#endif //PO_PRIVATE_H
