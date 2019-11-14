//
// Created by Boladar on 29.10.2019.
//

#include <fstream>
#include <iostream>
#include <iomanip>
#include "DatabaseElement.h"

DatabaseElement::DatabaseElement() {
    this->id = numberOfInstances;
    numberOfInstances++;
    this->creationTime = time(0);
}

void DatabaseElement::setCreationTime(time_t t){
    creationTime = t;
}

int DatabaseElement::getId(){
    return id;
}

void DatabaseElement::printID(int indentLevel) {
    for(int i = 0; i < indentLevel; i++){
        cout << "\t";
    }

    cout << id << endl;
}

bool DatabaseElement::operator==(const DatabaseElement &other) {
    return this->id == other.id;
}

void DatabaseElement::printIndent(int indentLevel) {
    for( int i = 0; i < indentLevel; i++){
        cout << "\t";
    }
}



void DatabaseElement::print() {
    tm tm = *localtime(&creationTime);

    cout << " | id : " << id << " | creationTime:  " << put_time(&tm," %c");

}

void DatabaseElement::save(fstream &file) {
    file << creationTime << " ";
}

void DatabaseElement::read(istream &input) {

}

