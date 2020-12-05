#include "penalties.h"
#include <vector>
#include <string>
#include <iostream>
#include <math.h> 

std::string addBinary(std::string a, std::string b)
{
    std::string result = ""; 
    int s = 0;          

    
    int i = a.size() - 1, j = b.size() - 1;
    while (i >= 0 || j >= 0 || s == 1)
    {
        
        s += ((i >= 0) ? a[i] - '0' : 0);
        s += ((j >= 0) ? b[j] - '0' : 0);

       
        result = char(s % 2 + '0') + result;

        s /= 2;     
        i--; j--;
    }
    return result;
}

std::string multBinary(std::string a, std::string b) {
    int length1 = a.length();
    int length2 = b.length();
    std::vector<std::string> P;

    P.push_back("0");
    for (int i = 1; i <= length2; i++) {

        std::string temp(a);
        for (int j = 1; j < i; j++) {
            temp = addBinary(temp, temp);
        }
        if (b[length2 - i] == '1') {

            P.push_back(addBinary(temp, P[i - 1]));
        }
        else {
            P.push_back(P[i - 1]);
        }
    }
    return P[length2];

}


 



