#include <iostream>
#include <vector>

int main() {

    // normal use case like an array, i dont see a point doing this?
    // std::vector<std::string> strings(5);
    std::vector<std::string> strings;

    // add new element
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");

    // [] is overloaded for the vector class
    // [3] = "dog";

    // 1. way of looping through
    for (int i = 0; i < strings.size(); ++i) {
        std::cout << strings[i] << '\n';
    }

    // 2. way of looping through
    for(std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); it++) {
        std::cout << *it << '\n';
    }

    // access like an array
    std::cout << strings[3] << '\n';
    std::cout << strings.size() << '\n';


    return 0;
}
