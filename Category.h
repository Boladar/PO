//
// Created by aleks on 03.11.2019.
//

#ifndef PO_CATEGORY_H
#define PO_CATEGORY_H


#include <fstream>

class Category {
public:
    Category() = default;
    virtual void printName(int indentLevel) {};
    virtual void printChildrenNames(int indentLevel){};
    virtual void createObject(){
        cout << " cannot create new object in directory that is not a leaf" << endl;
    };
    virtual void DeleteObject(int id){
        cout << "cannot remove object from a directory that is not a leaf" << endl;
    }
    virtual void ModifyObject(int id){
        cout << "cannot modify object from a directory that is not a leaf" << endl;
    }
    virtual void ShowObject(int id){
        cout << "cannot show object from a directory that is not a leaf" << endl;
    }
    virtual void Save(fstream& file){

    }
    virtual void Read(fstream &file, int quantity){

    }

};

#endif //PO_CATEGORY_H
