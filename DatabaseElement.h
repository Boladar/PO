//
// Created by Boladar on 29.10.2019.
//

#ifndef PO_DATABASEELEMENT_H
#define PO_DATABASEELEMENT_H


#include <ctime>
using namespace std;

class DatabaseElement {
public:
    DatabaseElement(time_t creationTine, int id);
private:
    time_t creationTine;
protected:
    int id;
public:
    time_t getCreationTine();
    int getId();
    void Print();
};


#endif //PO_DATABASEELEMENT_H
