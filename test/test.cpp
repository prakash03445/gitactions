#include <iostream>
#include "math.hpp"

int main() {
    if (factorial(5) != 120) {
        std::cerr << "Test failed: factorial(5) != 120\n";
        return 1;
    }

    if (factorial(0) != 1) {
        std::cerr << "Test failed: factorial(0) != 1\n";
        return 1;
    }

    std::cout << "All tests passed!\n";
    return 0;
}
