#include<iostream>
#include<time.h>

using namespace std;

int main()
{	
	srand(time(NULL));
	int x, y;
	x = rand() % 100 + 1;
	
	cout << "Guess the number (1 - 100)"<<endl;
	
	while (1)
	{
		cin >> y;
		if (x < y)
			cout << "your guess is greater than the number" << endl;
		if (x > y)
			cout << "your guess is fewer than the number" << endl;
		if (x == y)
		{
			cout << "Congratulations!" << endl;
			break;
		}
	}
	getchar();
	getchar();

}