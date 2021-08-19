#include <iostream>
#include <map>

int main() {

    std::map<std::string, int> ages;

    // add elements
    ages["Mike"] = 40;
    ages["Raj"] = 20;
    ages["Vicky"] = 30;

    // because we try to add element with same key, we overwrite the value only
    // keys in map are always unique
    ages["Mike"] = 70;

    // another way to add new elements with pairs, since we store pairs in maps
    std::pair<std::string, int> addToMap("Peter", 100);
    // this also works:
    ages.insert(std::pair<std::string, int>("John", 150));
    // and this:
    ages.insert(std::make_pair("Jacky", 200));

    std::cout << ages["Raj"] << '\n';

    // test if value is in the map
    if (ages.find("Vicky1") != ages.end()) {
        std::cout << "Found Vicky" << '\n';
    } else {
        std::cout << "Key not found" << '\n';
    }

    // what we store in a map is of type "pair" which is a template class
    for (std::map<std::string, int>::iterator it=ages.begin(); it != ages.end(); it++) {
        std::pair<std::string, int> age = *it;

        std::cout << age.first << ": " << age.second << '\n';
    }

    for (std::map<std::string, int>::iterator it=ages.begin(); it != ages.end(); it++) {
        std::cout << it->first << ": " << it->second << '\n';
    }

    return 0;
}
