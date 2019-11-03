//
// Created by aleks on 02.11.2019.
//

#ifndef PO_EDUCATIONAL_H
#define PO_EDUCATIONAL_H


#include "Polish.h"

class Educational : public Polish {
protected:
    int numberOfStudents;
public:
    Educational(const string &name, int numberOfEmployees, int nationalOwnershipPercentage,
                const string &submitter, const string &voivodeship, int airPollutionIndicator, int numberOfStudents,
                const string &principalName);
    Educational();

    int getNumberOfStudents() const;

    const string &getPrincipalName() const;

private:
    string principalName;
};


#endif //PO_EDUCATIONAL_H
