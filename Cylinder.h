#ifndef CYLINDER_H
#define CYLINDER_H

class Cylinder
{
	public:
		Cylinder();
		~Cylinder();

		double getRadius() const;
		double getHeight() const;
//these two find Radius and Height in main.cpp
		void setRadius(double radius);
		void setHeight(double height);
//these two set Radius and Height in main.cpp
		double calculateVolume()const;
		double calculateSurfaceArea()const;
//these get used to develope my equations

	private:
		double radius;
		double height;
		const double PI;
//these declare the values for JUST this object
};
#endif // !CYLINDER_H