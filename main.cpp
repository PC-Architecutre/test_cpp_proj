#include <iostream>
#include "product.h"
#include <iostream>

struct Point {
    int x;
    int y;
};

//void AddX(this Point p, int x)
//{
//
//}

int main(int argc, char** argv) {
    cout << "Hello, World!" << std::endl;
    Point p;
    p.x = 5;
    p.x += 10;
    Point* ptr_p;
    ptr_p = new Point();
    ptr_p->x = p.x;
    cout << ptr_p->x - 10;
}


