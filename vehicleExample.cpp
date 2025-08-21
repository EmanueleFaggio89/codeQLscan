#include <iostream>
#include <vector>

int main() {
    std::vector<std::string> vehicles = {"car", "bike", "truck"};
    int idx;
    std::cin >> idx;
    std::cout << vehicles[idx] << std::endl;

    for (auto &v : vehicles) 
        std::cout << v << std::endl;
}
