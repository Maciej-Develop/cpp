// always include the header file
#include <iostream>
#include "add.h"

int Foo::add(int x, int y) {
    std::cout << "Foo::add int" << '\n';
    return x + y;
}

int Foo::add(double x, double y) {
    std::cout << "Foo::add double" << '\n';
    return x + y;
}
