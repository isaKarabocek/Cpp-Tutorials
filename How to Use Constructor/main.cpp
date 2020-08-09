#include<iostream>
#include"box.h"

using namespace std;

int main()
{
	box b1(2, 4, 6);
	cout <<"Constructor  values: "<< b1.getVolume() << endl;
	b1.setValue(7, 5, 3);
	cout <<"set values: "<< b1.getVolume() << endl;

	box b2;
	b2.IDset(10000);
	cout <<"ID set: "<< b2.IDgen() << endl;

	box b3;
	b3.IDset(b2.IDgen());
	cout <<"ID set by using object b2: "<< b3.IDgen() << endl;


	getchar();
	getchar();
}