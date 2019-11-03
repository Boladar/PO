//
// Created by aleks on 03.11.2019.
//

#ifndef PO_CATEGORY_H
#define PO_CATEGORY_H


class Category {
public:
    Category() = default;
    virtual void print(int indentLevel) {};
    virtual void printChildren(int indentLevel){};
};

#endif //PO_CATEGORY_H
