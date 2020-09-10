#include<iostream>
#include<fstream>

#include"BankAccount.h"

using namespace std;

void BankAccount::openAccountFile(int AccNo, string userName, string UserSurName, int Balance)
{
	int AccountNo;
	int Bal;
	string UName;
	string USName;
	int flag = 0;

	infile.open("AccountDetails.txt");
	while (infile >> AccountNo >> UName >> USName >> Bal)
	{
		if (AccNo == AccountNo)
		{
			flag = 1;
		}
	}
	infile.close();
	if (flag == 0)
	{
		outfile.open("AccountDetails.txt", std::ios::app);
		outfile << AccNo << " " << UserName << " " << UserSurName << " " << Balance << endl;
		outfile.close();
	}
}
void BankAccount::openNewUserAccount(int AccountNo, string userName, string UserSurName, int Balance)
{
	this->AccountNo = AccountNo;
	this->UserName = userName;
	this->UserSurName = UserSurName;
	this->Balance = Balance;
	BankAccount::openAccountFile(AccountNo, userName, UserSurName, Balance);
}
void BankAccount::displayAccountStatus(int AccNo)
{
	int AccountNo;
	int Balance;
	string UserName;
	string UserSurName;

	int flag = 0;
	infile.open("AccountDetails.txt");
	while (infile >> AccountNo >> UserName >> UserSurName >> Balance)
	{
		if (AccNo == AccountNo)
		{
			flag = 1;
			cout << AccountNo << " " << UserName << " " << UserSurName << " " << Balance << endl;
		}
	}
	if (flag == 0)
	{
		cout << "Account Not found with no: " << AccNo << endl;
	}
	infile.close();
}
void BankAccount::withdrawMoney(int AccNo, int amt)
{
	int AccountNo;
	int Balance;
	string UserName;
	string UserSurName;

	int cnt = 0;
	int flag = 0;
	infile.open("AccountDetails.txt");
	while (infile>>AccountNo>>UserName>>UserSurName>>Balance)
	{
		cnt++;
	}
	infile.close();  //Creating array dynmically
	int* accNos = new int[cnt];
	string* fnames = new string[cnt];
	string* snames = new string[cnt];
	int* bals = new int[cnt];

	infile.open("AccountDetails.txt");
	for (int i = 0; i < cnt; i++)
	{
		infile >> AccountNo >> UserName >> UserSurName >> Balance;
		if (AccountNo == AccNo)
		{
			flag = 1;
		}
		accNos[i] = AccountNo;
		fnames[i] = UserName;
		snames[i] = UserSurName;
		bals[i] = Balance;
	}
	infile.close();
	if (flag == 0)
	{
		cout << "Bank Account not found with Account No: " << AccNo << endl;
	}
	else
	{
		outfile.open("AccountDetails.txt");
		for (int i = 0; i < cnt; i++)
		{
			if (AccountNo == accNos[i])
			{
				bals[i] -= amt;
				outfile << accNos[i] << " " << fnames[i] << " " << snames[i] << " "<<bals[i] << endl;
			}
			else
			{
				outfile << accNos[i] << " " << fnames[i] << " " << snames[i] << " " << bals[i] << endl;
			}
		}
		outfile.close();
	}
}
void BankAccount::depositMoney(int AccNo, int amt)
{
	int cnt = 0;
	int flag = 0;
	infile.open("AccountDetails.txt");
	while (infile >> AccountNo >> UserName >> UserSurName >> Balance)
	{
		cnt++;
	}
	infile.close();
	// Creating array dynamically
	int* accNos = new int[cnt];
	string* fnames = new string[cnt];
	string* snames = new string[cnt];
	int* bals = new int[cnt];
	infile.open("AccountDetails.txt");
	for (int i = 0; i<cnt; i++)
	{
		infile >> AccountNo >> UserName >> UserSurName >> Balance;
		if (AccountNo == AccNo)
		{
			flag = 1;
		}
		accNos[i] = AccountNo;
		fnames[i] = UserName;
		snames[i] = UserSurName;
		bals[i] = Balance;
	}
	infile.close();
	if (flag == 0)
	{
		cout << "BankAccount not found with Account No :" << AccNo << endl;
	}
	else
	{
		outfile.open("AccountDetails.txt");
		for (int i = 0; i<cnt; i++)
		{
			if (AccountNo == accNos[i])
			{
				bals[i] += amt;
				outfile << accNos[i] << " " << fnames[i] << " " << snames[i] << " " << bals[i] << endl;
			}
			else
			{
				outfile << accNos[i] << " " << fnames[i] << " " << snames[i] << " " << bals[i] << endl;
			}
		}
		outfile.close();
	}
}
void BankAccount::displayFullAccounts()
{
	int AccountNo;
	int Balance;
	string UserName;
	string UserSurName;
	cout << "____ Displaying all account details ____" << endl;
	infile.open("AccountDetails.txt");
	while (infile >> AccountNo >> UserName >> UserSurName >> Balance)
	{
		cout << AccountNo << " " << UserName << " " << UserSurName << " " << Balance << endl;
	}
	infile.close();
}