//
// Created by Boladar on 29.10.2019.
//

#ifndef PO_DATABASEELEMENT_H
#define PO_DATABASEELEMENT_H


#include <ctime>

class DatabaseElement {
public:
    DatabaseElement(time_t creationTine, int id);
private:
    time_t creationTine;
protected:
    int id;
public:
    time_t getCreationTine() const;

    int getId() const;
};


#endif //PO_DATABASEELEMENT_H
