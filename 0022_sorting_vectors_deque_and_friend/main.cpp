#include <iostream>
#include <vector>

class Test {
    int id;
    std::string name;

public:
    Test(int id, std::string name): id(id), name(name) {}

    void print() {
        std::cout << id << ": " << name << '\n';
    }

    // operator overloading
    // if we want to sort by name, we use name
    // , if we want to sort by id, we use id here
    /*
    bool operator<(const Test &other) const {
        return name < other.name;
    }*/

    // prototype we need so we can publicly use the member variables
    // friend - allows access to private members
    friend bool comp(const Test &a, const Test &b);
};

// comparing two test items
bool comp(const Test &a, const Test &b) {
    return a.name < b.name;
}

int main() {

    std::vector<Test> tests;

    tests.push_back(Test(5, "Mike"));
    tests.push_back(Test(3, "Vicky"));
    tests.push_back(Test(10, "Sue"));
    tests.push_back(Test(7, "Raj"));

    // sort
    // comp here is a function pointer
    std::sort(tests.begin(), tests.end(), comp);


    // std::deque
    // difference is we can add members to the beginning as well as the end
    // since you can only elements to the end of the vector

    for (int i = 0; i < tests.size(); ++i) {
        tests[i].print();
    }

    return 0;
}
