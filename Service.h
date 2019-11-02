//
// Created by aleks on 02.11.2019.
//

#ifndef PO_SERVICE_H
#define PO_SERVICE_H


#include "Polish.h"

class Service : public Polish {
public:
    Service(time_t creationTine, int id, const string &name, int numberOfEmployees, int nationalOwnershipPercentage,
            const string &submitter, const string &voivodeship, int airPollutionIndicator, const string &typeOfservice,
            const string &target);
private:
    string typeOfService;
protected:
    string target;
};


#endif //PO_SERVICE_H
