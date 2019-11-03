//
// Created by aleks on 02.11.2019.
//

#include <iostream>
#include "National.h"

National::National() : Institution() {

}
void National::print() {
    Institution::print();
    cout << " | nationalOwnershipPercentage : " << nationalOwnershipPercentage << " | submitter : " << submitter;
}
