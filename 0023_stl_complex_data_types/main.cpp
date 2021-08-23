#include <iostream>
#include <vector>
#include <map>

int main() {

    // nesting std::map with std::vector
    // ,vector being the scoreList we display when we display map's values
    std::map<std::string, std::vector<int>> scores;

    scores["Mike"].push_back(10);
    scores["Mike"].push_back(20);
    scores["Vicky"].push_back(15);

    for(std::map<std::string, std::vector<int>>::iterator it = scores.begin(); it != scores.end(); it++) {
        std::string name = it->first;
        std::vector<int> scoreList = it->second;

        std::cout << name << ": " << std::flush;

        for (int i = 0; i < scoreList.size(); ++i) {
            std::cout << scoreList[i] << " " << std::flush;
        }

        std::cout << '\n';
    }

    return 0;
}
