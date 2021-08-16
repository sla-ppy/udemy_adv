#include <iostream>
#include <fstream>

// important! - the file is created inside cmake-build-debug by default

int main() {
    // std::ofstream out;
    std::fstream out;

    std::string outName = "test.txt";

    // out.open(outName);
    out.open(outName, std::ios::out);

    if (out.is_open()) {
        out << "Hello There" << '\n';
        out << "123" << '\n';
        out.close();
    } else {
        std::cout << "Could not create file: " << outName << '\n';
    }

    return 0;
}
