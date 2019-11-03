//
// Created by aleks on 03.11.2019.
//

#ifndef PO_DATABASELEAF_H
#define PO_DATABASELEAF_H


#include <type_traits>
#include <vector>
#include <iostream>
#include "Category.h"
#include "DatabaseElement.h"

using namespace std;

template<typename T, typename std::enable_if<std::is_base_of<T,DatabaseElement>::value> * = nullptr>
class DatabaseLeaf : public Category {
private:
    vector<DatabaseElement*> elements;
public:
    void printName(int indentLevel) override{
        string name = typeid(T).name();
        name.erase(remove_if(name.begin(), name.end(), [](char c) { return !isalpha(c); } ), name.end());

        if(indentLevel >0 )
            cout << "\t";

        cout << name << endl;
    }

    void printChildrenNames (int indentLevel) override {
        printName(indentLevel);
        for(int i = 0; i < elements.size();i++){

            for(int i = 0; i < indentLevel; i++){
                cout << "\t";
            }
            cout << "|";

            elements[i]->printChildrenNames(indentLevel + 1);
        }
    }
};


#endif //PO_DATABASELEAF_H
