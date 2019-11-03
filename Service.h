//
// Created by aleks on 02.11.2019.
//

#ifndef PO_SERVICE_H
#define PO_SERVICE_H


#include "Polish.h"

class Service : public Polish {
public:
    Service();
    void print() override;
    void save(fstream &file) override;

private:
    string typeOfService;
protected:
    string target;
};


#endif //PO_SERVICE_H
