#ifndef LEARNING_ADD_H
#define LEARNING_ADD_H

// write documentation in the header files
namespace Foo {
    int add(int, int);

    int add(double, double);

    int add(double, int) = delete;
}


#endif //LEARNING_ADD_H
