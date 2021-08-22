#include <iostream>
#include <exception>

void goesWrong() {
    bool errorOnedetected{true};
    bool errorTwodetected{false};

    if (errorOnedetected) {
        throw std::bad_alloc();
    }
    if (errorTwodetected) {
        throw std::exception();
    }
}

int main() {

    try {
        goesWrong();
    } catch (std::exception &e) { // this line accepts std::bad_alloc because std::bad_alloc is sub class of std::exception(polymorphism)
        std::cout << "Catching exception: " << e.what() << '\n';
    }  catch (std::bad_alloc &e) {
        std::cout << "Catching bad_alloc: " << e.what() << '\n';
    }

    // that is why we should have the exceptions in the correct order
    // you need to catch the sub classes before the parent classes
    /*
    try {
        goesWrong();
    } catch (std::bad_alloc &e) {
        std::cout << "Catching bad_alloc: " << e.what() << '\n';
    } catch (std::exception &e) { // this line accepts std::bad_alloc because std::bad_alloc is sub class of std::exception(polymorphism)
        std::cout << "Catching exception: " << e.what() << '\n';
    }
    */

    return 0;
}
