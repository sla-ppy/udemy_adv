#include <iostream>
#include <map>

class Person {
private:
    std::string name;
    int age;

public:

    // we need a default constructor
    // we make shallow copies here
    Person(): name("None"), age(0) {}

    // copy constructor
    Person(const Person &other) {
        name = other.name;
        age = other.age;
    }

    Person(std::string name, int age) : name(name), age(age) {}

    void print() const {
        std::cout << name << ": " << age << std::flush;
    }

    // operator overloading
    bool operator<(const Person &other) const {
        return name < other.name;
    }

};


int main() {

    std::map<Person, int> people;

    // map always sort elements according to its keys
    people[Person("Mike", 40)] = 40;
    people[Person("Mike", 444)] = 123;
    people[Person("Sue", 30)] = 30;
    people[Person("Raj", 20)] = 20;

    for(std::map<Person, int>::iterator it = people.begin(); it != people.end(); it++) {
        std::cout << it->second << ": " << std::flush;
        it->first.print();
        std::cout << '\n';
    }

    return 0;
}
