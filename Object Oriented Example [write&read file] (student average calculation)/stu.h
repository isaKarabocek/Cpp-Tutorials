#pragma once
#include<string>
#include<fstream>
using namespace std;

class stu
{
private:
	int ID;
	string name;
	string Sname;

public:
	int m1;
	int m2;
	int fin;
	void setProp(int, string, string);
	int getID();
	string getName();
	string getSurName();
	void setResults(int, int, int);
	float getResults();


};
class der :public stu
{
public:

	float Total()
	{
		return getResults();
	}
	ofstream infile;
	ifstream outfile;
	void write();
	void read();

};


