//
// Created by koler on 04.05.2021.
//

#ifndef UNTITLED_GROCERY_H
#define UNTITLED_GROCERY_H

#include "product.h"

class grocery: public product {
public:
    void setMass();
    void setName(const string &name) override;
private:
    int mass;
};


#endif //UNTITLED_GROCERY_H
