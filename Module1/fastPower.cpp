#include "fastPower.h"

//EXERCISE 1: Fast power algorithm

int fastpower(std::string a, std::string b, std::string c) {

    int x = stoip(a);
    unsigned long y= std::stoul(b, nullptr, 2);
    int p = stoip(c);
    int res = 1;

    x = x % p;

    if (x == 0) return 0;

    while (y > 0) {

        if (y & 1)
            res = (res * x) % p;


        y = y >> 1;
        x = (x * x) % p;
    }
    intToString(res);
    return res;
}