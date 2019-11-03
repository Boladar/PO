//
// Created by aleks on 02.11.2019.
//

using namespace std;

#include <vector>
#include "DatabaseElement.h"
#include "Category.h"
#include <string>
#include <algorithm>
#include <memory>

template<typename T, typename std::enable_if<std::is_base_of<T,DatabaseElement>::value> * = nullptr>
class DatabaseCategory : public Category{
private:
    vector<Category*> children;
public:
    DatabaseCategory() : Category(){};

    DatabaseCategory(Category* element1) : Category(){
        children.push_back(element1);
    }

    DatabaseCategory(Category* element1,Category* element2): Category(){
        children.push_back(element1);
        children.push_back(element2);
    }

    DatabaseCategory(Category* element1,Category* element2,Category* element3) : Category(){
        children.push_back(element1);
        children.push_back(element2);
        children.push_back(element3);
    }

    void printName(int indentLevel) override{
        string name = typeid(T).name();
        name.erase(remove_if(name.begin(), name.end(), [](char c) { return !isalpha(c); } ), name.end());

        if(indentLevel >0 )
            cout << "\t";

        cout << name << endl;
    }

    void printChildrenNames (int indentLevel) override {
        printName(indentLevel);
        for(int i = 0; i < children.size();i++){

            for(int i = 0; i < indentLevel; i++){
                cout << "\t";
            }
            cout << "|";

            children[i]->printChildrenNames(indentLevel + 1);
        }
    }

};
