#include<iostream>
#include<string>

using namespace std;

void pyramid(int);

int main()
{	
	int x = 0;
	cout << "enter the height of the pyramid: " << endl;
	cin >> x;
	pyramid(x);

	getchar();
}
void pyramid(int n)
{
	int c = 0;
	int k = 2*n - 1;

	for (int i=0; i<n; i++)
	{
		for (int j=0;j<k;j++)
		{
			cout << " ";
		}
		k = k - 1;
		for (int j=0;j<=i;j++)
		{	
			string str="# ";
			cout<<str;
		}
		cout << endl;
	}
}