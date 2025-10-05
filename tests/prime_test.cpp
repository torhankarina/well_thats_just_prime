#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/prime.hpp"

TEST_CASE("returns empty vector for n <= 1") {
    Factorizer factorizer;

    REQUIRE(factorizer.primeFactors(0).empty());
    REQUIRE(factorizer.primeFactors(1).empty());
}

TEST_CASE("works for small numbers") {
    Factorizer factorizer;

    REQUIRE(factorizer.primeFactors(9) == std::vector<int>({3, 3}));
    REQUIRE(factorizer.primeFactors(10) == std::vector<int>({2, 5}));
    REQUIRE(factorizer.primeFactors(17) == std::vector<int>({17}));
    REQUIRE(factorizer.primeFactors(24) == std::vector<int>({2, 2, 2, 3}));
    REQUIRE(factorizer.primeFactors(35) == std::vector<int>({5, 7}));
    REQUIRE(factorizer.primeFactors(100) == std::vector<int>({2, 2, 5, 5}));
}