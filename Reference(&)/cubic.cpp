#include<iostream>

using namespace std;

int cubic(int*);
int main()
{
	int num = 0;
	cout << "enter the number:\n";
	cin >> num;
	cout << "cubic: " << cubic(&num) << endl;
	
}
int cubic(int *nPtr)
{
	return *nPtr * *nPtr * *nPtr;
}
