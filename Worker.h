//
// Created by Boladar on 29.10.2019.
//

#ifndef PO_WORKER_H
#define PO_WORKER_H


#include "Person.h"

class Worker : public Person {
public:
    Worker(const std::string &surname, const std::string &name,
           const std::string &factoryName, int salary);
    Worker();

    const std::string &getFactoryName() const;

    int getSalary() const;

    void print() override;

protected:
    std::string factoryName;
private:
    int salary;
};


#endif //PO_WORKER_H
