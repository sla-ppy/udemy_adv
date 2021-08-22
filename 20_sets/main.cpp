#include <iostream>
#include <set>

class Test {
private:
    int id;
    std::string name;

public:

    Test(): id(0), name("") {

    }

    Test(int id, std::string name): id(id), name(name) {}

    // print is const == it doesn't modify the object
    // ,the body doesn't change the instance variables
    void print() const {
        std::cout << id << ": " << name << '\n';
    }

    // operator overloading
    // comparing strings, returns true
    bool operator<(const Test &other) const {
        return name < other.name;
    }
};

// a set only stores unique elements
int main() {

    std::set<int> numbers;

    numbers.insert(50);
    numbers.insert(10);
    numbers.insert(30);
    numbers.insert(30);
    numbers.insert(20);

    // add values to a set: double, strings
    // adding objects to a set from a custom class

    // sets order the items by value


    for(std::set<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
        std::cout << *it << '\n';
    }

    // finding elements in std::set
    std::set<int>::iterator itFind = numbers.find(30);

    // 1.
    if (itFind != numbers.end()) {
        std::cout << "Found: " << *itFind << '\n';
    }

    // 2.
    if (numbers.count(30)) {
        std::cout << "Number found." << '\n';
    }


    // ---------------------- //


    // custom objects with std::set
    std::set<Test> tests;

    tests.insert(Test(10, "Mike"));
    tests.insert(Test(30, "Joe"));
    // we are unable to do a second insert, because we have a "Joe" already
    // the insert just wont happen here
    tests.insert(Test(333, "Joe"));
    tests.insert(Test(20, "Sue"));

    for(std::set<Test>::iterator it = tests.begin(); it != tests.end(); it++) {
        it->print();
    }

    return 0;
}
