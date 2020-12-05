#include "inverse.h"
#include <numeric>

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

int inverse(int a, int n)
{
    if (std::gcd(a, n) > 1) {
        return 0;
    }
    int x, y;
    EE(a, n, x, y);
    if (x < 0) x += n;
    return x;
}