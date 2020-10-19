#include "PrimeFinder.h"

/*
 * This implementation makes use of the prime decomposition property of numbers
 */
std::vector<number> PrimeFinder::getPrimes(unsigned int n) {
    std::vector<number> primeList;
    primeList.reserve(n);
    primeList.push_back(2);
    primeList.push_back(3);
    number next2Check = 5;

    bool isPrime;
    while (true) {
        isPrime = true;
        for (number prime : primeList) {
            if (next2Check % prime == 0) {
                isPrime = false;
                break;
            }
            if (prime * 3 > next2Check) {
                break;
            }
        }
        if (isPrime) {
            primeList.push_back(next2Check);
            if (primeList.size() == n) break;
        }
        next2Check += 2;
    }
    return primeList;
}


