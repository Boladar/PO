//
// Created by aleks on 02.11.2019.
//

#ifndef PO_FOREIGN_H
#define PO_FOREIGN_H


#include "Private.h"

class Foreign : public virtual Private {

public:
    Foreign();
    void print() override;

    void save(fstream &file) override;

    void read(istream &input) override;

private:
    string countryOfOrigin;
protected:
    string officialLanguage;
};


#endif //PO_FOREIGN_H
