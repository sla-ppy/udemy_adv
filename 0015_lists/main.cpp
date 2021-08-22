#include <iostream>
#include <list>

int main() {

    std::list<int> numbers;

    // add to end
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    // add to start
    // probaly a good idea to order the syntax according to the elements of the list
    // , so the opposite of what we do here
    numbers.push_front(0);

    // insert
    std::list<int>::iterator  it = numbers.begin();
    it++;
    numbers.insert(it, 100);
    std::cout << "Element: " << *it << '\n';

    // erase
    std::list<int>::iterator  eraseIt = numbers.begin();
    eraseIt++;
    // this wont work, because it invalidates the iterator!!!
    // numbers.erase(eraseIt);

    // we need to do the following, because we are gonna point the iterator
    // , to the element after the one we erased
    // this increments the iterator, only incerement when we are erasing
    eraseIt = numbers.erase(eraseIt);
    std::cout << "Element: " << *eraseIt << '\n';


    for(std::list<int>::iterator  it = numbers.begin(); it != numbers.end();) {
        if (*it == 2) {
            numbers.insert(it, 1234);
        }
        if (*it == 1) {
            //
            it = numbers.erase(it);
        } else {
            it++;
        }
    }

    for(std::list<int>::iterator  it = numbers.begin(); it != numbers.end(); it++) {
        std::cout << *it << '\n';
    }

    return 0;
}
