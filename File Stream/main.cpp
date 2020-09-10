#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	string line;
	string name, surname;
	int age;

	ofstream myFile;
	myFile.open("yaz.txt");

	cout << "name: " << endl;
	cin >> name;
	cout << "surname: " << endl;
	cin >> surname;
	cout << "age: " << endl;
	cin >> age;

	myFile << name << "  " << surname << "  " << age << endl;

	ifstream myFile2;
	myFile2.open("yaz.txt");
	if (myFile2.is_open())
	{
		while (getline(myFile2, line))
		{
			cout << line << endl;
		}
	}
	else
		cout << "Close" << endl;
	myFile2.close();

	return 0;
}