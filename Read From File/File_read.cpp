#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	ofstream myFile;
	myFile.open("data.txt");
	myFile << "Tyler's red jacket\n";
	myFile.close();


	string line;
	
	ifstream myfile("data.txt");

	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			cout << line << endl;
		}
		myfile.close();
	}
	else
		cout << "file is not found" << endl;

}