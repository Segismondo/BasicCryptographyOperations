#include "inverse.h"
#include <numeric>

//EXERCISE 0: Finding an inverse modulo N

void EE(int a, int b, int& x, int& y) {
    if (a % b == 0)
    {
        x = 0;
        y = 1;
        return;
    }
    EE(b, a % b, x, y);
    int temp = x;
    x = y;
    y = temp - y * (a / b);
}

int inverse(std::string b, std::string c){
    int a = stoip(b);
    int n = stoip(c);

    if (std::gcd(a, n) > 1) {
        intToString(0);
        return 0;
    }
    int x, y;
    EE(a, n, x, y);
    if (x < 0) x += n;
    intToString(x);
    return x;
}

void gcdo(std::string b, std::string c) {
    int a = stoip(b);
    int n = stoip(c);
    int result;
    result = std::gcd(a, n);
    intToString(result);

}