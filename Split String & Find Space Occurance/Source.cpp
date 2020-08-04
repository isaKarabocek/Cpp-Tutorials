#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include<cctype>

using namespace std;

void writingFile();
string readingFile();
void subString();


struct DataInfo
{
	int ID;
	string name, surname;
	int day, month, year;
	int age;
}person1;

int main()
{
	writingFile();
	cout << readingFile() << endl << endl;
	subString();
	

	return 0;
}
void writingFile()
{
	ofstream fileW;
	fileW.open("splitString.txt");
	fileW << "101 Yildiz Mechatronics 17/11/1999" << endl;
	fileW.close();
}
string readingFile()
{
	string Read;
	ifstream myfile("splitString.txt");

	if (myfile.is_open())
	{
		while (getline(myfile, Read))
		{
			return Read;
		}
		myfile.close();
	}
	else cout << "Unable to open file";
}
void subString()
{
	string Read, id;
	int pos[20], j = 1, k = 0;

	Read = readingFile();

	cout << "\nFinding Occurances of spaces\n";
	for (int i = 0; i < Read.length(); i++)
	{
		if (Read[i] == ' ')
		{
			cout << j << ".space is located in : " << i+1 << endl;
			pos[j - 1] = i;
			j++;
		}
	}
	cout << "\nASSIGNING them to OBJECT's VAR. \n";

	person1.ID = stoi(Read.substr(k, pos[k]));
	person1.name = Read.substr(pos[k] + 1, pos[k + 1] - pos[k]);
	person1.surname = Read.substr(pos[k + 1] + 1, pos[k + 2] - pos[k + 1]);
	person1.day = stoi(Read.substr(pos[k + 2] + 1, 2));
	person1.month= stoi(Read.substr(pos[k + 2] + 4, 2));
	person1.year= stoi(Read.substr(pos[k + 2] + 7, 4));

	cout << "\n\nID: " << person1.ID <<
		"\nName: " << person1.name <<
		"\nSurname: " << person1.surname <<
		"\nDay: " << person1.day <<
		"\nMonth: " << person1.month <<
		"\nYear: " << person1.year <<
		"\nAge: " << 2019 - person1.year << endl;

	cout << "\n^##### FINISH with SPACES ######\n\n";
}
