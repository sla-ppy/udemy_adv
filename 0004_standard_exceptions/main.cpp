#include <iostream>

class canGoWrong {
public:
    canGoWrong() {
        char *pMemory = new char[9999999999999999];
        delete[] pMemory;
    }
};

int main() {

    try {
        canGoWrong wrong;
    }
    catch(std::bad_alloc &e) {
        std::cout << "Caught exception: " << e.what() << '\n';
    }

    std::cout << "Still running" << '\n';

    return 0;
}