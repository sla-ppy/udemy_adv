#include <iostream>
#include "Complex.h"

int main() {

    Complex c1(2, 4);

    std::cout << *c1 + *Complex(4, 3) << '\n';

    return 0;
}
