#include <iostream>

template<class T>
void print(T n) {
    std::cout << "Template version: " << n << '\n';
}

// we can overload functions too
void print(int value) {
    std::cout << "Non-template version: " << value << '\n';
}

template<class T>
void show() {
    std::cout << T() << '\n';
}

int main() {

    print<std::string>("Hello");
    print<int>(5);
    print("Hi there");


    std::cout << '\n';


    // be default, we will use the non-template function because
    // , c++ considers it a better candidate since we take an int as a parameter in print()
    print(5);

    // we can define that we want the template version by doing this:
    print<>(6);

    // we cant call this because function definition doesn't have a function argument
    // show();

    // this will actually work
    show<double>();

    return 0;
}
