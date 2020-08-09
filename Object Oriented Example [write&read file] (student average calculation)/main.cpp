#include<iostream>
#include"stu.h"

using namespace std;

int main()
{	
	cout << " # " << "   ID   " << " Name " << "     Surname " << "   M1(%20) " << "   M2(%30) "
		<< " Final(%50) " << " Total " << endl;
	remove("student.txt");
	der s1;
	
	s1.setProp(11067001, "Alby", "Hastings");
	s1.setResults(80, 50, 100);
	s1.write();
	
	
	der s2;
	s2.setProp(11067002, "Sylvia", "Cornell");
	s2.setResults(60, 75, 75);
	s2.write();
	

	der s3;
	s3.setProp(11067003, "Afsana", "Walter");
	s3.setResults(70, 80, 10);
	s3.write();
	

	der s4;
	s4.setProp(11067004, "Diana", "Benson");
	s4.setResults(50, 80, 40);
	s4.write();
	

	der s5;
	s5.setProp(11067005, "Safaa", "Cantrell");
	s5.setResults(40, 90, 30);
	s5.write();

	s1.read();

}