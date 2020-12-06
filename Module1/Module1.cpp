#include "penalties.h"
#include "inverse.h"
#include "fastPower.h"
#include "squareModuloP.h"
#include "divBinary.h"
#include "squareModuloPCongruent.h"
#include "primalityFermat.h"
#include <iostream>
#include <climits>
#include <stdio.h>
#include <algorithm>
#include <numeric>


int main()
{   

    /*std::cout << "-------------------------ADDITION----------" << std::endl;
    std::string num1 = "1010100";
    std::string num2 = "1001100";
    std::string result = addBinary(num1, num2);
    std::cout << num1 << ", " << num2 << ", " << result << std::endl;*/


    /*//std::cout << "-------------------------MULTIPLICATION----------" << std::endl;
    std::string num1 = "111011";
    std::string num2 = "10";
    std::string result = multBinary(num1, num2);
    std::cout << num1 << ", " << num2 << ", " << result << std::endl;*/



    /*std::cout << "-------------------------DIVISION----------" << std::endl;

    std::string a = "11110100";
    std::string b = "1011100";
    std::cout << a << ", " << b << ": " << std::endl << std::endl;
    divide(a, b);*/


    /*std::cout << "-------------------------0.- INVERSE----------" << std::endl;
    std::cout << std::endl;
    std::string a = "1111110";
    std::string n = "11001101";
    std::cout << a << ", " << n << ", ";
    gcdo(a, n);
    std::cout << ", ";
    inverse(a, n);
    */

    /*std::cout << "-------------------------1.- FAST POWER----------" << std::endl;
    std::cout << std::endl;
    std::string b = "1001101000";
    std::string k = "1001101000";
    std::string n = "1001101100";
     
    std::cout << b << ", " << k << ", " << n << ", ";
    fastpower(b, k, n); 
    */

    /*std::cout << "-------------------------2.- SQUARE MODULO P----------" << std::endl;
   
    std::cout << std::endl;
    std::string p = "1010101111101";
    std::string m = "1000011111110";

    if (squareRootExists(p, m)) {
        std::cout << p << ", " << m << ", " << "yes";
    }
    else {
        std::cout << p << ", " << m << ", " << "no";
    }
    */
    

    /*std::cout << "-------------------------3.- SQUARE MODULO P congruent to 3 modulo 4----------" << std::endl;

    std::cout << std::endl;
    std::string p = "11001111111";
    std::string m = "1001000101";

    std::cout << p << ", " << m << ", ";
    squareRoot(p, m);*/
    
    
    /*std::cout << "-------------------------4.-Algorithm which checks the primality using Fermat's test----------" << std::endl;
    int iteration = 1000;
    ll num = 9923888;
  
    if (Fermat(num, iteration)) {
        std::cout << num << " no " << std::endl;
    }
    else {
        std::cout << num << " yes" << std::endl;
    }
    */
    return 0;

    

   


    
    
    
    return 0;

   

}

