#include <iostream>

// template classes work with types the user defines

template<class T>
class Test {
private:
    T obj;

public:
    Test(T obj) {
        this->obj = obj;
    }

    void print() {
        std::cout << obj << '\n';
    }
};

int main() {

    Test<std::string> test1("Hello");
    test1.print();

    return 0;
}
