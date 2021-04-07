//
// Created by artem on 4/7/21.
//

#ifndef UNTITLED_PRODUCT_H
#define UNTITLED_PRODUCT_H

#include <string>
using namespace std;

class product {
public:
    void setName(const string name);
    string getName();
private:
    string _name;
};


#endif //UNTITLED_PRODUCT_H
