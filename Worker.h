//
// Created by Boladar on 29.10.2019.
//

#ifndef PO_WORKER_H
#define PO_WORKER_H


#include "Person.h"

class Worker : public Person {
public:
    Worker(int id, std::string name,std::string jobName);
protected:
    std::string jobName;
};


#endif //PO_WORKER_H
