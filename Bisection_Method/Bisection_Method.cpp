#include <iostream>

using namespace std;

//function used h^3-0.67123h^2+0.022653
double func(double h)
{
	return h*h*h - 0.67123*h*h + 0.022653;
}
double e = 0.01;
double c;

void bisection(double a, double b)
{
	if (func(a)*func(b) >= 0)
	{
		cout << "incorrect a and b";
		return;
	}
	c = a;
	while ((b - a) >= e)
	{
		c = (a + b) / 2;
		if (func(c) == 0.0)
		{
			cout << "Root = " << c << endl;
			break;
		}
		else if (func(c)*func(a) < 0)
		{
			cout << "Root = " << c << endl;
			b = c;
		}
		else
		{
			cout << "Root = " << c << endl;
			a = c;
		}

	}
}
int main()
{
	double a, b;

	a = 0.4;
	b = 0.7;

	cout << "the fucntion obtained Bernoulli's equation is h^3-0.67123h^2+0.022653" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	bisection(a, b);
	cout << endl;
	cout << "Approximate Root calculated is = " << c << endl;
	return 0;
}