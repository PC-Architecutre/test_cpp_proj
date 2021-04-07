#include <iostream>
#include "product.h"
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    auto* p = new product();
    p->setName("Phone");
    cout << "Name: " + p->getName();
    return 0;
}
