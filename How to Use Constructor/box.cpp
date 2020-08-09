#include<iostream>
#include "box.h"

using namespace std;

box::box(int k, int i, int j)
{
	h = k;
	w = i;
	l = j;
	counter++;
	ID = genID();
}
box::box()
{
	ID = genID();
}
void box::setValue(int a, int b, int c)
{
	h = a;
	w = b;
	l = c;
}
int box::getVolume()
{
	return h*w*l;
}
int box::IDgen()
{
	return counter + 10000;
}
void box::IDset(int d)
{
	counter = d;
}
int box::counter = 0;
int box::genID()
{
	return 10000 + counter * 100;
}