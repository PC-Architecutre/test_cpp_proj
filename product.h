//
// Created by artem on 4/7/21.
//

#ifndef UNTITLED_PRODUCT_H
#define UNTITLED_PRODUCT_H

#include <string>
using namespace std;

class product {
public:
    product();
    product(const string name);

    void setPtrName(int* name);
    void virtual setName(const string& name);
    string getName();
    int* getPtrName();
private:
    string _name;
    int* _ptr_name;
};


#endif //UNTITLED_PRODUCT_H
