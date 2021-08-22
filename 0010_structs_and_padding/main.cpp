#include <iostream>

// disable padding
#pragma pack(push, 1)
// without this we would get 64 for the byte size
// disabling padding means we get 62

struct Person {
    char name[50]; // 50 bytes
    int age; // 4 bytes
    double weight; // 8 bytes
};

// enable padding again, for efficiency
#pragma pack(pop)

int main() {

    std::cout << sizeof(Person) << '\n';

    return 0;
}
