#include <vector>
#include "prime.hpp"

std::vector<int> Factorizer::primeFactors(int n) {
    std::vector<int> factors;

    if (n <= 1) {
        return factors;
    }

    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }

    if (n > 2) {
        factors.push_back(n);
    }

    return factors;
}