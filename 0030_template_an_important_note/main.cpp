#include <iostream>

// its better to define our template classes all in header files

template<class T, class K>
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

    Test<std::string, int> test1("Hello");
    test1.print();

    return 0;
}
