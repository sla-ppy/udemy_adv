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
        std::cout << "Copy constructor running!" << '\n';
        name = other.name;
        age = other.age;
    }

    Person(std::string name, int age) : name(name), age(age) {}

    void print() const {
        std::cout << name << ": " << age << '\n';
    }

};


int main() {

    std::map<int, Person> people;

    // map always sort elements according to its keys
    people[50] = Person("Mike", 40);
    people[32] = Person("Vicky", 30);
    people[2] = Person("Raj", 20);

    people.insert(std::make_pair(55, Person("Bob", 45)));
    people.insert(std::make_pair(55, Person("Sue", 24)));

    for(std::map<int, Person>::iterator it = people.begin(); it != people.end(); it++) {
        std::cout << it->first << ": " << std::flush;
        it->second.print();
    }

    return 0;
}
