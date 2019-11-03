//
// Created by aleks on 03.11.2019.
//

#ifndef PO_CATEGORY_H
#define PO_CATEGORY_H


class Category {
public:
    Category() = default;
    virtual void printName(int indentLevel) {};
    virtual void printChildrenNames(int indentLevel){};
};

#endif //PO_CATEGORY_H
