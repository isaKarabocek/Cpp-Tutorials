#pragma once
#include<fstream>
#include<string>
using namespace std;

class BankAccount
{
public:
	int AccountNo;
	int Balance;
	string UserName;
	string UserSurName;
	string fileName;
	ofstream outfile;
	ifstream infile;

	void openAccountFile(int AccountNo, string userName, string UserSurName, int Balance);
	void openNewUserAccount(int AccountNo, string userName, string UserSurName, int Balance);
	void displayAccountStatus(int AccountNo);
	void withdrawMoney(int AccountNo, int amt);
	void depositMoney(int AccountNo, int amt);
	void displayFullAccounts();

};