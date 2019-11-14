//
// Created by Boladar on 29.10.2019.
//

#ifndef PO_WORKER_H
#define PO_WORKER_H


#include "Person.h"

class Worker : public Person {
public:
    Worker();
    void print() override;

    void save(fstream &file) override;

    void read(istream &input) override;

protected:
    string factoryName;
private:
    string salary;
};


#endif //PO_WORKER_H
