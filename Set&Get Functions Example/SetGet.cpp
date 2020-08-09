#include<iostream>
using namespace std;

class Rect
{
public:
	void setID(int ID);
	int getID();
	void area() { cout << "area: " << id*id; }

private:
	int id;
};

int Rect::getID()
{
	return id;
}

void Rect::setID(int ID)
{
	id = ID;
}
int main()
{
	Rect obj1;
	obj1.setID(9);
	cout << "ID value has changed after set to : " << obj1.getID() << endl;
	obj1.area();
	cout << endl;
}