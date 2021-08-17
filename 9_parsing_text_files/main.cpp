#include <iostream>
#include <fstream>

int main() {

    std::string fileName = "stats.txt";
    std::ifstream input;

    input.open(fileName);

    // exit program if file isn't open
    if (!input.is_open()) {
        return 1;
    }

    // loop through lines
    while(input) {
        std::string line;

        std::getline(input, line, ':');

        int population{};
        // extraction operator
        input >> population;

        // input.get(); - not ideal
        input >> std::ws;

        // check if we get error
        if (!input) {
            break;
        }

        std::cout << "'" << line << "'" << " -- " << population << "'" << '\n';
    }

    input.close();

    return 0;
}
