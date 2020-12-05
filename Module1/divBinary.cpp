
#include "divBinary.h"

#include <string>

int stoip(std::string binaryNumber) {
    return std::stoi(binaryNumber, nullptr, 2);
}



void intToString(int num) {
    
    int rem;

    if (num > 0) {
        int index = 1;
        while (index <= num)
            index *= 2;
        index /= 2;

        do {
            if (num >= index) {
                std::cout << '1';
                num -= index;
            }
            else
                std::cout << '0';
            index /= 2;
        } while (index > 0);
        std::cout << std::endl;
    }
    else
        std::cout << '0';

}

div_result divide(std::string a, std::string b) {
    div_result result;

    int dividend = stoip(a);
    int divisor = stoip(b);

    if (divisor == 0) {
        result.quotient = dividend < 0 ? INT_MIN : INT_MAX;
        result.remainder = 0;
        return result;
    }

    if ((dividend == INT_MIN) && (divisor == -1)) {
        result.quotient = INT_MAX;
        result.remainder = 0;
        return result;
    }

    int negative = (dividend < 0) ^ (divisor < 0);

    if (dividend < 0) {
        dividend = -dividend;
    }
    if (divisor < 0) {
        divisor = -divisor;
    }

    int quotient = 0, remainder = 0;

    for (int i = 0; i < sizeof(int) * 8; i++) {
        quotient <<= 1;

        remainder <<= 1;
        remainder += (dividend >> (INT_BITS - 1)) & 1;
        dividend <<= 1;

        if (remainder >= divisor) {
            remainder -= divisor;
            quotient++;
        }
    }

    if (negative) {
        result.quotient = -quotient;
        result.remainder = -remainder;
    }
    else {
        result.quotient = quotient;
        result.remainder = remainder;
    }
    intToString(result.quotient);
    intToString(result.remainder);
    
    return result;
}

