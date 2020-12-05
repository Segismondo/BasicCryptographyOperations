#include "squareModuloPCongruent.h"

bool isCongruent(int p) {
    if (p % 4 == 3)
        return true;
    else
        return false;
}

int squareRoot(std::string a, std::string b) {
    int p = stoip(a);
    int n = stoip(b);

    if (!isCongruent)
        return 0;
    n = n % p;

    for (int x = 2; x < p; x++) {
        if ((x * x) % p == n) {
            intToString(x);
            return x;
           

        }

    }
    intToString(0);
    return 0;
}
