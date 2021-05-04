//
// Created by artem on 4/7/21.
//

#include "product.h"

string product::getName() {
    return _name;
}

void product::setName(const string& name) {
    _name = name;
}

product::product() {

}

product::product(const string name)
{
    this->_name = name;
}

void product::setPtrName(int * name) {
    _ptr_name = name;
}

int* product::getPtrName() {
    return _ptr_name;
}
