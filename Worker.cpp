//
// Created by Boladar on 29.10.2019.
//

#include <iostream>
#include "Worker.h"

Worker::Worker() : Person() {

}

void Worker::print() {
    Person::print();
    cout <<" | factoryName : " << factoryName << " | salary :  " << salary << endl;
}

void Worker::save(fstream &file) {
    Person::save(file);
    file << factoryName << " "<<salary << endl;
}

void Worker::read(istream &input) {
    Person::read(input);
    input >> factoryName >> salary;
}
