#include <iostream>

int main() {
    //Copy-initialization
    //int width = 5;

    // List-initialization (preferred in C++)
    // int width {5}; OK
    // int height {5.7}; Not OK, because 5.7 is not an int
    // width = 5.7; OK, the double will be converted to int

    // If multiple std::cout, prefer \n over std::endl (less flushes)
    //std::cout << "Hello world!" << std::endl;

    //
    /*std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cout << "You entered " << x << '\n';*/

    return 0;
}
