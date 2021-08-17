#include <iostream>
#include <fstream>

int main() {

    std::string inFileNAme = "test.txt";
    // input filestream
    std::ifstream inFile;

    // open file for reading
    inFile.open(inFileNAme);

    if (inFile.is_open()) {

        std::string line;

        // loop until "eof" - end of file
        // while(inFile) {  - also works, by operator overloading, this would also work
        while (!inFile.eof()) {
            // easiest way to get data line by line
            getline(inFile, line);
            std::cout << line << '\n';
        }

        inFile.close();
    } else {
        std::cout << "Cannot open file: " << inFileNAme << '\n';
    }

    return 0;
}
