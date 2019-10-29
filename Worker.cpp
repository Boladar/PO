//
// Created by Boladar on 29.10.2019.
//

#include "Worker.h"

Worker::Worker(int id, std::string name, std::string jobName) : Person(id, name) {
    this->jobName = jobName;
}
