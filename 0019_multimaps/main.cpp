#include <iostream>
#include <map>

int main() {

    std::multimap<int, std::string> lookup;

    // add elements
    // multimap orders its keys
    lookup.insert(std::make_pair(30, "Mike"));
    lookup.insert(std::make_pair(10, "Vicky"));
    // in a multimap, we can happily store values with the same key!
    lookup.insert(std::make_pair(30, "Raj"));
    lookup.insert(std::make_pair(20, "Bob"));

    for(std::multimap<int, std::string>::iterator it = lookup.begin(); it != lookup.end(); it++) {
        std::cout << it->first << ": " << it->second << '\n';
    }

    std::cout << '\n';

    // you use find to check if a value is in the
    // find is useful for finding a single element
    for(std::multimap<int, std::string>::iterator it = lookup.find(10); it != lookup.end(); it++) {
        std::cout << it->first << ": " << it->second << '\n';
    }

    std::cout << '\n';

    // finding range of elements like this
    std::pair<std::multimap<int, std::string>::iterator, std::multimap<int, std::string>::iterator> its = lookup.equal_range(30);

    for(std::multimap<int, std::string>::iterator it = its.first; it != its.second; it++) {
        std::cout << it->first << ": " << it->second << '\n';
    }

    std::cout << '\n';

    // auto keyword, im completely biased and i LOVE this keyword
    auto autoIts = lookup.equal_range(30);

    for(auto it = autoIts.first; it != autoIts.second; it++) {
        std::cout << it->first << ": " << it->second << '\n';
    }

    return 0;
}
