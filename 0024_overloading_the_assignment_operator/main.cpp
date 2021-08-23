#include <iostream>

class Test {
private:
    int id;
    std::string name;

public:
    Test(): id(0), name("") {

    }

    Test(int id, std::string name): id(id), name(name) {

    }

    void print() {
        std::cout << id << ": " << name << '\n';
    }

    // operator overloading
    const Test &operator=(const Test &other) {

        std::cout << "Assignment running" << '\n';

        id = other.id;
        name = other.name;

        return *this;
    }

    Test(const Test &other) {
        std::cout << "Copy constructor running" << '\n';
        *this = other; // we can do this because we got our assignment overloading
    }
};

int main() {

    Test test1(10, "Mike");
    std::cout << "Print test1: " << std::flush;
    test1.print();

    Test test2(20, "Bob");

    // this works because c++ provides a default implementation
    // that causes this to work with a shallow copy
    test2 = test1;
    std::cout << "Print test2: " << std::flush;
    test2.print();

    // sometimes we might want to do deep copies, for example with unique ID's
    // , that we want to keep for test1 and test2

    Test test3;
    //test3 = test2 = test1;

    // test3 = test2;
    // these are doing the same thing
    test3.operator=(test2);
    std::cout << "Print test3: " << std::flush;
    test3.print();


    // -------------- //
    std::cout << '\n';
    // Copy initialization, thats why we dont get "assignment running" here
    // because we didn't give test4 a value, we straight up assigned it with a new object's values
    Test test4 = test1;
    test4.print();


    // thats why we need to define a copy constructor if we are
    // doing operator overloading

    return 0;
}
