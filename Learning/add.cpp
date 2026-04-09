// always include the header file
#include <iostream>
#include "add.h"

namespace Foo {
    int add(int x, int y)
    {
        std::cout << "Foo::add" << '\n';
        return x + y;
    }
}
