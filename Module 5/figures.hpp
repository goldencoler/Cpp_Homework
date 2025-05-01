#pragma once
#include <string>

namespace Shapes 
{

    enum Shape 
    {
        DEFAULT = -1,
        CIRCLE = 0,
        SQUARE = 1,
        TRIANGLE = 2,
    };

    void printShape(Shape fig_name);

    Shape whatShape(std::string figure);
}
