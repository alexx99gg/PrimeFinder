#include <iostream>
#include <chrono>

#include "lib/PrimeFinder.h"

int main() {
    PrimeFinder primeFinder = PrimeFinder();
    int nPrimes;

    std::cout << "How many prime numbers do you want?" << std::endl;
    std::cin >> nPrimes;

    auto start = std::chrono::high_resolution_clock::now();

    std::vector<number> primeList = PrimeFinder::getPrimes(nPrimes);

    auto end = std::chrono::high_resolution_clock::now();

    double time_taken =
            std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count();

    time_taken *= 1e-9;

    std::cout << time_taken << "\n";

    return 0;
}
