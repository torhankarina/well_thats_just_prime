#include <iostream>

#include "src/prime.hpp"

void printFactors(const std::vector<int>& factors) {
    std::cout << "[";
    for (size_t i = 0; i < factors.size(); ++i) {
        std::cout << factors[i];
        if (i != factors.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]";
}

int main() {
    Factorizer factorizer;

    int numbers[] = {0, 1, 9, 10, 17, 24, 35, 100};
    for (int n : numbers) {
        std::vector<int> result = factorizer.primeFactors(n);
        std::cout << "Prime factors of " << n << " are: ";
        printFactors(result);
        std::cout << std::endl;
    }
    return 0;
}
