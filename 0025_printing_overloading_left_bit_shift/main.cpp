#include <iostream>

class Test {
private:
    int id;
    std::string name;

public:
    // default constructor
    Test(): id(0), name("") {}

    // member initialization list
    Test(int id, std::string name) : id(id), name(name) {}

    void print() {
        std::cout << id << ": " << name << '\n';
    }

    // operator overloading
    const Test &operator=(const Test &other) {
        id = other.id;
        name = other.name;

        return *this;
    }

    Test(const Test &other) {
        *this = other;
    }

    // overloading the left bit shift for the class
    friend std::ostream &operator <<(std::ostream &out, const Test &test) {
        out << test.id << ": " << test.name;
        return out;
    }

};

int main() {

    Test test1(10, "Mike");
    Test test2(20, "Bob");

    // overloading the left bit shift
    std::cout << test1 << test2 << '\n';

    return 0;
}