#include "factorial.h"
#include <iostream>
#include <cmath>

int Factorial_Int(int n, bool debug_message) 
{
    if (debug_message)
    {
        std::cout << "Int factorial:" << std::endl;
    }
    int factorial_res = 1;

    for (int i = 1; i <= n; i++) 
    {
        factorial_res *= i;
    }
    return factorial_res;
}

float Factorial_Float(float n, bool debug_message) 
{
    if (debug_message)
    {
        std::cout << "Float factorial:" << std::endl;
    }
    float factorial_res = 1.0f ;

    for (float i = 1.0f; i <= n; i++) 
    {
        factorial_res *= i;
    }
    return factorial_res;
}

float Gamma_Factorial_Float(float n, bool debug_message)
{
    if (debug_message)
    {
        std::cout << "(Gamma function) Float factorial:" << std::endl;
    }
    return std::tgamma(n + 1);

}