#include "primalityFermat.h"


ll modulo(ll base, ll exponent, ll mod)
{
    ll x = 1;
    ll y = base;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            x = (x * y) % mod;
        y = (y * y) % mod;
        exponent = exponent / 2;
    }
    return x % mod;
}


bool Fermat(ll p, int iterations)
{
    ll res = 0;
    if (p == 1)
    {
        return false;
    }
    for (int i = 0; i < iterations; i++)
    {
        ll a = rand() % (p - 1) + 1;
        if (modulo(a, p - 1, p) != 1)
        {
            return false;
        }
        res = a;
    }
    std::cout << modulo(res, p - 1, p);
    return true;
}