#include <iostream>
#include <vector>

int main() {

    std::vector<std::vector<int>> grid(3, std::vector<int>(4, 0));

    grid[1].push_back(8);

    for (int row = 0; row < grid.size(); ++row) {
        for (int col = 0; col < grid[row].size(); ++col) {
            // this is interesting here:
            std::cout << grid[row][col] << std::flush;
        }
        std::cout << '\n';
    }

    return 0;
}
