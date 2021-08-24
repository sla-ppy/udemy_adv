#include <iostream>
#include "Complex.h"

int main() {

    Complex c1(2, 3);
    // copy initialization
    Complex c2 = c1;

    // invoke assignment operator
    Complex c3 = c2;

    c3 = c2;

    std::cout << c2 << ": " << c3 << '\n';

    return 0;
}
