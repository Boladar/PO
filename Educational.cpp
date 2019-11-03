//
// Created by aleks on 02.11.2019.
//

#include <iostream>
#include "Educational.h"


Educational::Educational() : Polish(){

}

void Educational::print() {
    Polish::print();
    cout << " | numberOfStudents : " << numberOfStudents << " | principalName : " << principalName << endl;
}
