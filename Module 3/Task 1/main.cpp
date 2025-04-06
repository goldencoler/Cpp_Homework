#include <iostream>
#include "multiplication_table.h"

int main()
{
    std::cout << "Multiplication Table with 3 functions:" << "\n";
    std::cout << "\n";
   
    std::cout << "for loop function:" << "\n";
    ForLoopTable();
    std::cout << "\n";

    std::cout << "while loop function:" << "\n";
    WhileLoopTable();
    std::cout << "\n";

    std::cout << "do-while loop function:" << "\n";
    DoWhileLoopTable();
    std::cout << "\n";
 

}
