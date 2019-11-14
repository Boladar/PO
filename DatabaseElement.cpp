//
// Created by Boladar on 29.10.2019.
//

#include <fstream>
#include <iostream>
#include "DatabaseElement.h"

DatabaseElement::DatabaseElement() {
    this->id = numberOfInstances;
    numberOfInstances++;
    this->creationTime = time(0);
}

time_t DatabaseElement::getCreationTine() {
    return creationTime;
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
    cout << " | id : " << id << " | creationTime:  " << creationTime;

}

void DatabaseElement::save(fstream &file) {
   file << id << " " << creationTime << " ";
}

void DatabaseElement::read(istream &input) {

}

