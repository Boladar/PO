//
// Created by aleks on 02.11.2019.
//

#include "Service.h"

Service::Service( const string &name, int numberOfEmployees,
                 int nationalOwnershipPercentage, const string &submitter, const string &voivodeship,
                 int airPollutionIndicator, const string &typeOfservice, const string &target) : Polish( name,
                                                                                                        numberOfEmployees,
                                                                                                        nationalOwnershipPercentage,
                                                                                                        submitter,
                                                                                                        voivodeship,
                                                                                                        airPollutionIndicator),
                                                                                                 typeOfService(
                                                                                                         typeOfservice),
                                                                                                 target(target) {}

Service::Service() : Polish(){

}

void Service::print() {
    Polish::print();
}

