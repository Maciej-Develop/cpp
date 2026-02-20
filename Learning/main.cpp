//preprocessor directives
#include <iostream>

// We can use

// Do not use, it's better to use explicit namespaces
//using namespace std;

/*void foo_void()
{
    std::cout << "foo!\n";
}*/

// if no return => undefined behavior
/*int foo_return()
{
    return 5;
}*/

// if a parameter is not used, do not name him
/*void foo_parameter(int n, double)
{
    std::cout << n << '\n';
}*/

// forward declaration, not best use case
// if no definition, linking error
int add(int x, int y);

int main() {
    // Copy-initialization
    //int width = 5;

    // List-initialization (preferred in C++)
    //int width {5}; OK
    //int height {5.7}; Not OK, because 5.7 is not an int
    //width = 5.7; OK, the double will be converted to int

    // If multiple std::cout, prefer \n over std::endl (less flushes)
    //std::cout << "Hello world!" << std::endl;

    /*std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cout << "You entered " << x << '\n';*/

    // undefined behavior
    //int x;
    //std::cout << x << '\n';

    // side effect: an observable effect of an operator or function beyond producing a return value

    //foo_void();
    //std::cout << foo_return() << '\n';
    //foo_parameter(7, 1.2);

    std::cout << add(3, 4) << '\n';

    return 0;
}

/*int add(int x, int y)
{
    return x + y;
}*/