#include<iostream>
#include<string>

using namespace std;

class BOX
{
public:
	int h = 0;
	int w = 0;
	int l = 0;
	string name = "noName";

	int getVolume();
	void setVal(int, int, int, string);
	void Display();
};

void BOX::setVal(int a, int b, int c, string k)
{
	h = a;
	w = b;
	l = c;
	name = k;
}
int BOX::getVolume()
{
	return h*w*l;
}
void BOX::Display()
{
	cout << getVolume();
	cout << name;
}
int main()
{
	BOX b1;
	b1.setVal(2, 4, 5, "cube");
	b1.getVolume();
	b1.Display();

	getchar();
}