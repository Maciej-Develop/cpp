// preprocessor directives
// do not include source files, only headers
// "" for your files, <> for external headers
#include <iostream>
//#include "add.h"

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
//int add(int x, int y);

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

    //std::cout << add(3, 4) << '\n';

    //std::cerr << "Test" << '\n';

    // fundamental data types: void, short, int, double, float, bool, char
    // favor signed version (less problems)
    // (unsigned are used in bit manipulation and in some unavoidable cases)

    // std::boolalpha to print 'true' or 'false'. 0 is false, everything else true

    // use \ to print special characters like \"

    // make your variables const when you can
    // prefer const to preprocessor macros

    // compilers have a lot of liberty to optimize programs using :
    //      - constant folding
    //      - constant propagation
    //      - dead code elimination
    // constant are easier to optimize

    // const vs constexpr

    // std::string

    // operators
    // int / int = int
    // int / double or float =  double or float (only one of the operand needed for conversion)

    // ++x (pre-incrementation) vs x++ (post-incrementation)
    // prefixes are more performant

    // c ? x : y (If c is true then  x, otherwise  y)

    // comparing two floating can provoke if one of the number was calculated (rounding error)

    // best practice for code block : max level 3 else refactor

    // std::cout << Foo::add(3, 4) << '\n';

    // Scope = where you declare your variable
    // Linkage = if a identifier refers to the same object

    // best practice : declare variables in the most limited scope

    // best practice for global variable :
    //      - put g_ in front of the variable's name
    //      - declare them in a namespace

    // Shadowing (to avoid) : a variable with the same name as a variable from a higher level "hides" it

    // best practice : Give identifiers internal linkage when you have an explicit reason to disallow access from other files.
    // const global variables have internal linkage by default
    // non-const global variables and functions have external linkage by default

    // Use local variables instead of global variables whenever possible.



    return 0;
}

/*int add(int x, int y)
{
    return x + y;
}*/