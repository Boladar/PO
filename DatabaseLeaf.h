//
// Created by aleks on 03.11.2019.
//

#ifndef PO_DATABASELEAF_H
#define PO_DATABASELEAF_H


#include <type_traits>
#include <vector>
#include <iostream>
#include "DatabaseElement.h"
#include "DatabaseCategory.h"

using namespace std;

template<typename T, typename std::enable_if<std::is_base_of<T,DatabaseElement>::value> * = nullptr>
class DatabaseLeaf : public DatabaseCategory<T> {
private:
    vector<DatabaseElement*> elements;

    int findElementByID(int id){
        for(int i = 0; i < elements.size();i++){
            if(elements[i]->getId() == id){
                return i;
            }
        }

        return -1;
    }

public:

    DatabaseLeaf() : DatabaseCategory<T>(){}

    void createObject() override {

        if (typeid(T) == typeid(VIP)) {
            elements.push_back(new VIP());
        } else if (typeid(T) == typeid(Worker)) {
            elements.push_back(new Worker());
        } else if (typeid(T) == typeid(Service)) {
            elements.push_back(new Service());
        } else if (typeid(T) == typeid(Educational)) {
            elements.push_back(new Educational());
        }
    }


        void printChildrenNames (int indentLevel) override {
        this->printName(indentLevel);
        for(int i = 0; i < elements.size();i++){

            for(int i = 0; i < indentLevel; i++){
                cout << "\t";
            }
            cout << "|";

            elements[i]->printID(indentLevel + 1);
        }

    }

    void DeleteObject(int id) override {

        int index = findElementByID(id);
        if(index >= 0){
            DatabaseElement* element = elements[index];
            elements.erase(elements.begin()+index);
            delete( element);
        } else
            cout << "cannot delete object of id : " << id << ", it is not present in the current leaf" << endl;

    }

    void ModifyObject(int id) override {

        int index = findElementByID(id);
        if(index >= 0){
            //TODO MODIFY
        } else
            cout << "cannot modify object of id : " << id << ", it is not present in the current leaf" << endl;

    }

    void ShowObject(int id) override {

        int index = findElementByID(id);
        if(index >= 0){
            elements[index]->print();
        }else
        cout << "cannot show object of id : " << id << ", it is not present in the current leaf" << endl;
    }
};


#endif //PO_DATABASELEAF_H
