#include <iostream>
#include "factorial.h"

 // Тестирование работы #define


int main() 
{
    int int_res {0};
    float float_res {0.0f};

    int_res = Factorial_Int(5);
    std::cout << "      int: 5! = " << int_res << "\n";

    float_res = Factorial_Float(5.0f); 
    std::cout << "      float: 5! = " << float_res << "\n";

    float_res = Gamma_Factorial_Float(4.999f);
    std::cout << "      (With gamma function) float: 5! = " << float_res << "\n";
    
    return 0; 
}