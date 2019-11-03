//
// Created by aleks on 02.11.2019.
//

#ifndef PO_FOREIGN_H
#define PO_FOREIGN_H


#include "Private.h"

class Foreign : public Private {

public:
    Foreign();
    void print() override;
private:
    string countryOfOrigin;
protected:
    string officialLanguage;
};


#endif //PO_FOREIGN_H
