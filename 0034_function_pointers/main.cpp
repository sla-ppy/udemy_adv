#include <iostream>

void test(int value) {
    std::cout << "Hello: " << value << '\n';
}

int main() {

    test(7);

    // defining function pointer
    // void (*pTest)();
    void (*pTest)(int) = test; // this works even better
    // we only need to include the type of parameters

    // pointing pTest at the test function
    // pTest = &test; - works too
    // pTest = test; - also works

    // calling the pointer, getting the value
    // (*pTest)(); - also works?
    pTest(8);

    return 0;
}
