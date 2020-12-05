#include "squareModuloP.h"

bool squareRootExists(int p, int n) {
    n = n % p;

    for (int x = 2; x < p; x++)
        if ((x * x) % p == n)
            return true;
    return false;
}