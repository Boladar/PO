//
// Created by Boladar on 29.10.2019.
//

#include "Worker.h"

Worker::Worker(time_t creationTine, int id, const std::string &surname, const std::string &name,
               const std::string &factoryName, int salary) : Person(creationTine, id, surname, name),
                                                             factoryName(factoryName), salary(salary) {}

const std::string &Worker::getFactoryName() const {
    return factoryName;
}

int Worker::getSalary() const {
    return salary;
}

Worker::Worker() : Person() {

}
