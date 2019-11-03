//
// Created by aleks on 02.11.2019.
//

using namespace std;

#include <vector>
#include "DatabaseElement.h"
#include "Category.h"
#include <string>
#include <algorithm>

template<typename T, typename std::enable_if<std::is_base_of<T,DatabaseElement>::value> * = nullptr>
class DatabaseCategory : public Category{
private:
    vector<Category> children;
public:
    DatabaseCategory() : Category(){};

    template<typename U, typename std::enable_if<std::is_base_of<U, DatabaseCategory>::value> * = nullptr>
    DatabaseCategory(U element1) : Category(){
        children.push_back((Category)element1);
    }

    template<typename U, typename std::enable_if<std::is_base_of<U, DatabaseCategory>::value> * = nullptr,
    typename I, typename std::enable_if<std::is_base_of<I, DatabaseCategory>::value> * = nullptr>
    DatabaseCategory(U element1,I element2){
        children.push_back((Category)element1);
        children.push_back((Category)element2);
    }

    template<typename U, typename std::enable_if<std::is_base_of<U, DatabaseCategory>::value> * = nullptr,
            typename I, typename std::enable_if<std::is_base_of<I, DatabaseCategory>::value> * = nullptr,
            typename O, typename std::enable_if<std::is_base_of<O, DatabaseCategory>::value> * = nullptr>
    DatabaseCategory(U element1,I element2,O element3){
        children.push_back((Category)element1);
        children.push_back((Category)element2);
        children.push_back((Category)element3);
    }

    void print(int indentLevel) override{
        string name = typeid(T).name();
        name.erase(remove_if(name.begin(), name.end(), [](char c) { return !isalpha(c); } ), name.end());

        for(int i = 0; i < indentLevel; i++){
            cout << "\t";
        }

        cout << name << endl;
    }

    void printChildren (int indentLevel) override {
        for(int i = 0; i < children.size();i++){
            Category &element = children[i];
            element.print(indentLevel);
        }
    }

};
