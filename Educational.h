//
// Created by aleks on 02.11.2019.
//

#ifndef PO_EDUCATIONAL_H
#define PO_EDUCATIONAL_H


#include "Polish.h"

class Educational : public Polish {
protected:
    string numberOfStudents;
public:
    Educational();

    void print() override;

private:
    string principalName;
};


#endif //PO_EDUCATIONAL_H
