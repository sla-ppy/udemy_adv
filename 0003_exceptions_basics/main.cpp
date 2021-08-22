// try throwing and catching a basic expection
// trowing any catching different types, char const*, int, string

#include <iostream>

void throwStringException(){
    bool error{true};

    if(error) {
        throw std::string("This is a string exception");
    }
}

void throwPrimitiveException(){
    bool error{true};

    if(error) {
        throw("This is a privimite exception.");
    }
}

void throwIntException() {
    bool error{true};

    if(error) {
        throw 8;
    }
}

int main() {

    try {
        //throwIntException();
        //throwPrimitiveException();
        throwStringException();
    }
    catch(int e) {
        std::cout << "Error with int: " << e << std::endl;
    }
    catch(const char* e) {
        std::cout << "Error with primitive type: " << e << std::endl;
    }
    catch(std::string &e) {
        std::cout << "Error with string: " << e << std::endl;
    }

    std::cout << "Still running!" << std::endl;
}