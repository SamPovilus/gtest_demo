#include <iostream>


#include "rectangle.hpp"
int main(int argc, char* argv[])
{
    auto myRect1 = new Rectangle();
    myRect1->set_width(3);
    myRect1->set_height(2);
    std::cout << "area " << myRect1->get_area() << std::endl;
}

