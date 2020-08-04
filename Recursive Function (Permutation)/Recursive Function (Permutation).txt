#include <iostream>
#include<string>
using namespace std;
void permute(string a, int l, int r)
{
	if (l == r)
		cout << a << " ";
	else
	{
		for (int i = l; i <= r; i++)
		{
			swap(a[l], a[i]);
			permute(a, l + 1, r);
			swap(a[l], a[i]);
		}
	}
}
int main()
{
	string str;
	cout << "enter a string..." << endl;
	cin >> str;
	cout << "all permutations of the string are: " << endl;
	permute(str, 0, str.size() - 1);
	return 0;
}