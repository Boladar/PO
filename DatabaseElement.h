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
    time_t creationTime;
protected:
    int id;
    inline static int numberOfInstances = 0;
    static void printIndent(int indentLevel);
public:
    int getId();
    void printID(int indentLevel);
    virtual void print();
    bool operator==(const DatabaseElement& other);
    virtual void save(fstream& file);
    virtual void read(istream& input);
    void setCreationTime(time_t creationTime);
};

#endif //PO_DATABASEELEMENT_H

