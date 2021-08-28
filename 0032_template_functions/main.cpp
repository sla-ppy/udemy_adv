#include <iostream>

// could be "typename" instead of class
template<class T>
void print(T n) {
    std::cout << n << '\n';
}

int main() {

    // we can pass in whatever type we want
    print<std::string>("Hello");
    print<int>(5);

    // C++ also looks for a type, based on what value we pass
    print("Hi there");

    return 0;
}
