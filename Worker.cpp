//
// Created by Boladar on 29.10.2019.
//

#include <iostream>
#include "Worker.h"

Worker::Worker(const std::string &surname, const std::string &name,
               const std::string &factoryName, int salary) : Person(surname, name),
                                                             factoryName(factoryName), salary(salary) {}

const std::string &Worker::getFactoryName() const {
    return factoryName;
}

int Worker::getSalary() const {
    return salary;
}

Worker::Worker() : Person() {

}

void Worker::print() {
    Person::print();
    cout <<" | factoryName : " << factoryName << " | salary :  " << salary;
}
