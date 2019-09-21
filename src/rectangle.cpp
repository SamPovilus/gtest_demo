#include <iostream>

#include "rectangle.hpp"

void Rectangle::set_height(int h)
{
    height = h;
}
void Rectangle::set_width(int w)
{
    width = w;
}

int Rectangle::get_area()
{
    std::cout << "h " << height << std::endl;
    std::cout << "w " << width << std::endl;
    return height * width;
}