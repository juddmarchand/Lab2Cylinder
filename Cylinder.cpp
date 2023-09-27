#include "Cylinder.h"
#include <cmath>

Cylinder::Cylinder() : PI(3.14159265359)
{
	radius = 15.0;
	height = 29.0;
}
//all three of my constants (pi, radius, and height)

Cylinder::~Cylinder()
{
}
//constructor and destructor

double Cylinder::getRadius() const
{
	return radius;
}

double Cylinder::getHeight() const
{
	return height;
}
//these two make Radius and Height constants

void Cylinder::setRadius(double radius)
{
	radius = radius;
}

void Cylinder::setHeight(double height)
{
	height = height;
}
//these two use my constants above and declare them as "radius" and "height"

double Cylinder::calculateVolume() const
{
	return PI * radius * radius * height;
}

double Cylinder::calculateSurfaceArea() const {
	return 2 * PI * radius * height + (2 * PI * radius * radius);
}
//these two are my actual caclulations