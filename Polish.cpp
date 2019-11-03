//
// Created by aleks on 02.11.2019.
//

#include "Polish.h"

Polish::Polish(time_t creationTine, int id, const string &name, int numberOfEmployees, int nationalOwnershipPercentage,
               const string &submitter, const string &voivodeship, int airPollutionIndicator) : National(creationTine,
                                                                                                         id, name,
                                                                                                         numberOfEmployees,
                                                                                                         nationalOwnershipPercentage,
                                                                                                         submitter),
                                                                                                voivodeship(
                                                                                                        voivodeship),
                                                                                                airPollutionIndicator(
                                                                                                        airPollutionIndicator) {}

Polish::Polish() : National(){

}
