#include <iostream>
#include <vector>

int main() {

    std::vector<double> numbers(20);
    // initialization like this:
    // std::vector<double> numbers(20, 1);

    // a vector manages an array internally
    // vector class will create a new array if we give more elements
    // ,and it will copy all the previous elements + add the new ones
    std::cout << "Size: " << numbers.size() << '\n';

    // vector has a method called capacity(size of internal array)
    int capacity = numbers.capacity();

    std::cout << "Capacity: " << capacity << '\n';

    for (int i = 0; i < 10000; ++i) {

        if (numbers.capacity() != capacity) {
            capacity = numbers.capacity();
            // we find that capacity increases exponentially
            // ,doubles the size it has because it assumes that we will add almost the same number of elements again
            std::cout << "New capacity: " << capacity << '\n';

            // insertion time needs to be as constant as we can make it for efficiency
            // when copying from on internal array to another when expanding vector,
            // there will be a brief pause in the program we got
            // ,and we want to limit that as much as we can
            // thats why it tries to guess with capacity how big our array might get based on its size
        }

        numbers.push_back(i);
    }

    // useful members of vector class
    // remove all the elements of the vector, doesn't change capacity though
    numbers.clear();

    // capacity remains unchanged
    numbers.resize(100);

    // idea behind reserve: increase the capacity of the internal array
    // so if we got 10.000 elements, but we reserve space for 100.000
    // size will remain the same, but capacity will grow according to reserve amount
    // also can specify internal vector capacity
    numbers.reserve(100);

    return 0;
}