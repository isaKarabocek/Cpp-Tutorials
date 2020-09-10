#include<iostream>
#include<string>
#include<fstream>


using namespace std;

struct movies
{
	string name;
	int year;
	double Imdb;
	char director[30];
};

int main()
{
	struct movies movie1;
	struct movies movie2;

	movie2.name = "la Fabuleux Destin d'Amelie Poulain";
	movie2.year = 1994;
	strcpy_s(movie2.director, "Jean - Pierre JEUNET");
	movie2.Imdb = 8.3;

	movie1.name = "Leon the Professional";
	movie1.year = 1994;
	strcpy_s(movie1.director, "Luc Besson");
	movie1.Imdb = 8.5;

	cout << "	" << movie2.name << endl << endl;
	cout << "Director:" << movie2.director << endl;
	cout << "Year:	" << movie2.year << endl;
	cout << "IMDB:	" << movie2.Imdb << endl << endl<<endl;

	cout << "	" << movie1.name << endl << endl;
	cout <<"Director:"<< movie1.director << endl;
	cout <<"Year:	"<< movie1.year << endl;
	cout <<"IMDB:	"<< movie1.Imdb << endl;

	getchar();
}