#include <iostream>
#include "functions.h"
#include <string>

// Основная программа, где будет выводится информация об OC,
// компиляторе, размере укзателя и т.д.
using namespace std;


int main()
{
    std::cout << "--------------------------------------------------" << "\n";
    std::cout << OS_Info() << "\n";
    std::cout << Architecture_Info() << "\n";
    std::cout << Compiler_Info() << "\n";
    std::cout << Pointer_Size() << "\n";
    std::cout << "--------------------------------------------------" << std::endl;
    return 0;
}