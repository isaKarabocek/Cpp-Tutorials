#include<iostream>

using namespace std;

//Constructor overloading ...

class Const
{
public:
	int id;

	Const()
	{
		cout << "Default" << endl;
		id = 0;
	}
	Const(int x)
	{
		cout << "Assigned" << endl;
		id = x;
	}
};
int main()
{
	Const obj1;
	cout << obj1.id<<endl;
	Const obj2(2);
	cout << obj2.id << endl;
}