#include <iostream>
#include <fstream>

// disable padding
#pragma pack(push, 1)

struct Person {
    char name[50];
    int age;
    double height;
};

// re-enable padding
# pragma pack(pop)

int main() {

    Person someone = {"Frodo", 220, 0.8};

    // bin = binary file
    std::string fileName = "test.bin";

    //// write binary file ////

    std::ofstream outputFile;

    // we need to specify std::ios::binary because default is txt
    outputFile.open(fileName, std::ios::binary);

    if (outputFile.is_open()) {

        // this would work, but there is a better way
        // outputFile.write((char *)&someone, sizeof(Person));

        outputFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));

        outputFile.close();
    } else {
        std::cout << "Could not create file " + fileName;
    }

    //// read binary file ////

    Person someoneElse = {};

    std::ifstream inputFile;

    // we need to specify std::ios::binary because default is txt
    inputFile.open(fileName, std::ios::binary);

    if (inputFile.is_open()) {

        // this would work, but there is a better way
        // outputFile.write((char *)&someone, sizeof(Person));

        inputFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));

        inputFile.close();
    } else {
        std::cout << "Could not create file " + fileName;
    }

    std::cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height;
    return 0;
}
