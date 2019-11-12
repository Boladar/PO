//
// Created by Boladar on 29.10.2019.
//

#ifndef PO_DATABASEELEMENT_H
#define PO_DATABASEELEMENT_H


#include <ctime>
#include <fstream>
using namespace std;

class DatabaseElement {
public:
    DatabaseElement();
private:
    time_t creationTine;
protected:
    int id;
    inline static int numberOfInstances = 0;
    static void printIndent(int indentLevel);
public:
    time_t getCreationTine();
    int getId();
    void printID(int indentLevel);
    virtual void print();
    bool operator==(const DatabaseElement& other);
    virtual void save(fstream& file);
    virtual void read(istream& input);
};

#endif //PO_DATABASEELEMENT_H

