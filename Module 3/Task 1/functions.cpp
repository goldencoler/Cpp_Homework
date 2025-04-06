#include "multiplication_table.h"
#include <iostream>
#include <iomanip>

// i - номер строки
// j - номер столбца

void ForLoopTable()
{
    for(int i = 1; i < 11; i++)
    {
        for(int j = 1; j < 11; j++)
        {
            std::cout << std::setw(3) << i*j << " "; 
        }
        std::cout << "\n";
    }
}

void WhileLoopTable()
{
    int i = 1;
    int j = 1;
    while (i <= 10)
    {
        std::cout << std::setw(3) << i*j << " "; 
        ++j;
        if (j == 11)
        {
            ++i;
            j = 1;
            std::cout << "\n";
        }   
    }
}

void DoWhileLoopTable()
{
    int i = 1;
    int j = 1;
    do
    {
        std::cout << std::setw(3) << i*j << " "; 
        ++j;
        if (j == 11)
        {
            ++i;
            j = 1;
            std::cout << "\n";
        }     
    } while(i < 11); 
}
    