#include<iostream>
using namespace std;

class Circle
{
	double r;
public:
	Circle(double rr):r(rr){}					//Constructor
	double area() { return r*r*3.141592; }		//Area Calculation function
};
class Cylinder
{
	Circle base;		//base is an object of Circle class
	double height;

public:
	Cylinder(double rr, double hh) : base(rr), height(hh){}
	double volume() { return base.area()*height; }				//area() inherited from Circle
};
int main()
{
	Circle calc1(2);		//a circle object which radius's is 2
	Cylinder calc2(2, 5);	//a cylinder object which it base is 2 and height is 5

	cout << "Area of circle: " << calc1.area() << endl;
	cout << "Volume of cylinder: " << calc2.volume() << endl;
}