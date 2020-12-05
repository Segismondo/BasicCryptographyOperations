#pragma once


#include <iostream>
#include <bitset>
#include <limits.h>

#define INT_BITS (sizeof(int)*8)

typedef struct div_result div_result;
struct div_result {
	int quotient;
	int remainder;
};
int stoip(std::string binaryNumber);
void intToString(int num);
div_result divide(std::string a, std::string b);





