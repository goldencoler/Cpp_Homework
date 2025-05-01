#include "figures.hpp"
#include <iostream>
#include <string>

namespace Shapes
{
    void printShape(Shape fig_name) 
    {
        switch(fig_name)
        {
            case Shape::CIRCLE:
                std::cout <<  "Circle\n" << std::endl;
                break;

            case Shape::SQUARE:
                std::cout <<  "Square\n" << std::endl;
                break;

            case Shape::TRIANGLE:
                std::cout <<  "Triangle\n" << std::endl;
                break;

            default:
                std::cout <<  "Unknown Figure name\n" << std::endl;
                break;
        }    
    }

    Shape whatShape(std::string figure)
    {
        if (figure == "circle") return Shape::CIRCLE;

        else if (figure == "square") return Shape::SQUARE;

        else if (figure == "triangle") return Shape::TRIANGLE;
        
        else return Shape::DEFAULT;
    }
}