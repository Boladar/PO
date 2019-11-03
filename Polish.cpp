//
// Created by aleks on 02.11.2019.
//

#include <iostream>
#include "Polish.h"


Polish::Polish() : National(){

}

void Polish::print() {
    National::print();
    cout << " | voivodeship : " << voivodeship << " | airPollutionIndicator : " << airPollutionIndicator;
}
