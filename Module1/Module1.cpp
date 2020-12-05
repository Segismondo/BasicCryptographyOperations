#include "penalties.h"
#include "inverse.h"
#include "fastPower.h"
#include "squareModuloP.h"
#include "divBinary.h"
#include "squareModuloPCongruent.h"
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
    //TODO : CAMBIAR EL RESULTADO A BINARIO
    //TODO : CAMBIAR EL INPUT A BINARIO Y CONVERTIRLO DENTRO PARA FACILITAR TEST
    //TODO : incluir en output GDC
    //TODO : si GDC es mayor que 1, que devuelva []
    //int a = 126;  
    //int n = 205; 
    //std::cout << a << ", " << n << ", " << std::gcd(a, n) << ", " << inverse(a, n);*/


    /*std::cout << "-------------------------1.- FAST POWER----------" << std::endl;
    //TODO : CAMBIAR EL RESULTADO A BINARIO
    //TODO : CAMBIAR EL INPUT A BINARIO Y CONVERTIRLO DENTRO PARA FACILITAR TEST
    //int b = 740;
    //int k = 452;
    //int n = 972;
     
    //std::cout << b << ", " << k << ", " << n << ", " << fastpower(b, k, n);*/



    /*std::cout << "-------------------------2.- SQUARE MODULO P----------" << std::endl;
    //TODO : CAMBIAR EL RESULTADO A BINARIO
    //TODO : CAMBIAR EL INPUT A BINARIO Y CONVERTIRLO DENTRO PARA FACILITAR TEST
    /*
    int p = 1709;
    int m = 1315; 

    if (squareRootExists(p, m)) {
        std::cout << p << ", " << m << ", " << "yes";
    }
    else {
        std::cout << p << ", " << m << ", " << "no";
    }
    */

    /*std::cout << "-------------------------3.- SQUARE MODULO P congruent to 3 modulo 4----------" << std::endl;*/

    std::string p = "11001111111";
    std::string m = "1001000101";

    std::cout << p << ", " << m << ", ";
    squareRoot(p, m);
    
    
    


    

   


    
    
    
    return 0;

   

}

