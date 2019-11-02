//
// Created by aleks on 02.11.2019.
//

using namespace std;

#include <vector>
#include "DatabaseElement.h"

template<typename T, typename std::enable_if<std::is_base_of<T,DatabaseElement>::value> * = nullptr>
class DatabaseCategory{
private:
    vector<T> children;
public:
    template<typename U, typename std::enable_if<std::is_base_of<U, T>::value> * = nullptr>
    DatabaseCategory(U element){
        children.push_back(element);
    }

    void Print(){
        for(int i = 0; i < children.size(); i++){
            auto element = (DatabaseElement)children[i];
            element.Print();
        }
    }
};
