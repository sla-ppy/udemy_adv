#include <iostream>
#include "Complex.h"

int main() {

Complex c1(3, 2);
Complex c2(3, 3);

    if (c1 == c2) {
        std::cout << "Equal" << '\n';
    } else {
        std::cout << "Not equal" << '\n';
    }


    if (c1 != c2) {
        std::cout << "Not equal" << '\n';
    } else {
        std::cout << "Equal" << '\n';
    }

    return 0;
}
