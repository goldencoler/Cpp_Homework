#include "figures.hpp"
#include <iostream>
#include <string>

int main()
{

    Shapes::Shape fig {Shapes::Shape::DEFAULT};
    std::string str_fig_name = "";

    str_fig_name = "circle";
    std::cout << "Initial string figure name: " << str_fig_name << std::endl;
    fig = Shapes::whatShape(str_fig_name);
    Shapes::printShape(fig);

    str_fig_name = "square";
    std::cout << "Initial string figure name: " << str_fig_name << std::endl;
    fig = Shapes::whatShape(str_fig_name);
    Shapes::printShape(fig);

    str_fig_name = "triangle";
    std::cout << "Initial string figure name: " << str_fig_name << std::endl;
    fig = Shapes::whatShape(str_fig_name);
    Shapes::printShape(fig);

    str_fig_name = "toroid";
    std::cout << "Initial string figure name: " << str_fig_name << std::endl;
    fig = Shapes::whatShape(str_fig_name);
    Shapes::printShape(fig);
}