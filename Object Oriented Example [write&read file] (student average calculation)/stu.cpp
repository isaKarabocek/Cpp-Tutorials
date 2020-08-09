#include<iostream>
#include<string>
#include"stu.h"

using namespace std;

void stu::setResults(int v1, int v2, int final)
{
	m1 = v1;
	m2 = v2;
	fin = final;
}
float stu::getResults()
{
	return m1*0.2 + m2*0.3 + fin*0.5;
}
void stu::setProp(int id, string n, string sn)
{
	ID = id;
	name = n;
	Sname = sn;
}
int stu::getID()
{
	return ID;
}
string stu::getName()
{
	return name;
}
string stu::getSurName()
{
	return Sname;
}
void der::write()
{
	infile.open("student.txt", ios::app);
	infile << "  " << getID() << "   " << getName() << "    " << getSurName()
		<< "     " << m1 << "      " << m2 << "        " << fin << "          " << getResults()<<endl;
	infile.close();
	
}
void der::read()
{
	string line;
	ifstream outfile("student.txt");
	if (outfile.is_open())
	{
		while (getline(outfile, line))
		{
			cout << line << endl;
		}
		
	}
	outfile.close();
}
