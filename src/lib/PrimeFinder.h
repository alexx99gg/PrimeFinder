#ifndef PRIME_RACE_PRIMEFINDER_H
#define PRIME_RACE_PRIMEFINDER_H

#include <vector>
#define number unsigned long long int

struct PrimeFinder {
public:
    /*
     * Returns a vector containing the first n primes in ascendant order
     */
    static std::vector<number> getPrimes(unsigned int n);
    };

#endif //PRIME_RACE_PRIMEFINDER_H
