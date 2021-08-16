#include <iostream>
#include <exception>

// should have name appropriate to what exception it describes
class myException : public std::exception {
public:
    // overriding std::exception's what method
    virtual const char* what() const throw() {
        return "Something bad happened!";
    }
};

class Test {
public:
    void goesWrong() {
        throw myException();
    }
};

int main() {

    Test test;

    try {
        test.goesWrong();
    } catch(myException &e) {
        std::cout << e.what() << '\n';
    }
    return 0;
}
