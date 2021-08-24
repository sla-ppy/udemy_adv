#include <iostream>
#include "Complex.h"

int main() {

    Complex c1(3, 4);
    Complex c2(2, 3);

    Complex c3 = c1 + c2;

    std::cout << c1 << '\n';

    std::cout << c1 + c2 + c3 << '\n';


    // adding double to the real number
    Complex c4(4, 2);
    Complex c5 = c4 + 7;
    std::cout << c5 << '\n';


    Complex c6(1, 7);
    std::cout << 3.2 + c6 << '\n';


    std::cout << 7 + c1 + c2 + 8 + 9 + c6;

    return 0;
}
