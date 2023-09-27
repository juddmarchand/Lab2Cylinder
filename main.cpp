#include "Cylinder.h"
#include <iostream>

int main()
{
    Cylinder theCylinder;

    theCylinder.setRadius(15.0);
    theCylinder.setHeight(29.0);

    double radius = theCylinder.getRadius();
    double height = theCylinder.getHeight();
    double volume = theCylinder.calculateVolume();
    double surfacearea = theCylinder.calculateSurfaceArea();
    //these actually produce the numbers I need

    std::cout << "The Radius is:" << radius << std::endl;
    std::cout << "The Height is:" << height << std::endl;
    std::cout << "The Volume is: " << volume << std::endl;
    std::cout << "The Surface Area is: " << surfacearea << std::endl;
    //these spit out displays text on the window

    return 0;
}