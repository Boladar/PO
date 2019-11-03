//
// Created by aleks on 02.11.2019.
//

#include <iostream>
#include "Foreign.h"


Foreign::Foreign()  : Private(){

}

void Foreign::print() {
    Private::print();
    cout << " | countryOfOrigin : " << countryOfOrigin << " | officialLanguage : " << officialLanguage;
}
