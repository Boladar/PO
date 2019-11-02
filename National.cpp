//
// Created by aleks on 02.11.2019.
//

#include "National.h"

National::National(time_t creationTine, int id, const string &name, int numberOfEmployees,
                   int nationalOwnershipPercentage, const string &submitter) : Institution(creationTine, id, name,
                                                                                           numberOfEmployees),
                                                                               nationalOwnershipPercentage(
                                                                                       nationalOwnershipPercentage),
                                                                               submitter(submitter) {}
