#include "squareModuloP.h"

//EXERCISE 2: Algorithm which checks whether a number is a square modulo  P

bool squareRootExists(std::string a, std::string b) {
    int p = stoip(a);
    int n = stoip(b);
    n = n % p;

    for (int x = 2; x < p; x++)
        if ((x * x) % p == n)
            return true;
    return false;
}