//
// Created by aleks on 02.11.2019.
//

#include "Service.h"

Service::Service(time_t creationTine, int id, const string &name, int numberOfEmployees,
                 int nationalOwnershipPercentage, const string &submitter, const string &voivodeship,
                 int airPollutionIndicator, const string &typeOfservice, const string &target) : Polish(creationTine,
                                                                                                        id, name,
                                                                                                        numberOfEmployees,
                                                                                                        nationalOwnershipPercentage,
                                                                                                        submitter,
                                                                                                        voivodeship,
                                                                                                        airPollutionIndicator),
                                                                                                 typeOfService(
                                                                                                         typeOfservice),
                                                                                                 target(target) {}
