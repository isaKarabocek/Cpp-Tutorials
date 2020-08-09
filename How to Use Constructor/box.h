#pragma once

class box
{
public:
	static int counter;
	int ID;
	int h;
	int w;
	int l;

	void setValue(int, int, int);
	int getVolume();
	int IDgen();
	void IDset(int);
	box(int, int, int); //Constructor
	int genID();
	box(); //Default Constructor
};
