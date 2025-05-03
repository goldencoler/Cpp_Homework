#include "multiplication_table.h"
#include <iostream>
#include <iomanip>

// i - номер строки
// j - номер столбца

void ForLoopTable(int max_num)
{
    for(int i = 1; i <= max_num; i++)
    {
        for(int j = 1; j <= max_num; j++)
        {
            std::cout << std::setw(3) << i*j << " "; 
        }
        std::cout << "\n";
    }
}

void WhileLoopTable(int max_num)
{
    int i = 1;
    int j = 1;
    while (i <= max_num)
    {
        std::cout << std::setw(3) << i*j << " "; 
        ++j;
        if (j > max_num)
        {
            ++i;
            j = 1;
            std::cout << "\n";
        }   
    }
}

void DoWhileLoopTable(int max_num)
{
    int i = 1;
    int j = 1;
    do
    {
        std::cout << std::setw(3) << i*j << " "; 
        ++j;
        if (j > max_num)
        {
            ++i;
            j = 1;
            std::cout << "\n";
        }     
    } while(i <= max_num); 
}
    