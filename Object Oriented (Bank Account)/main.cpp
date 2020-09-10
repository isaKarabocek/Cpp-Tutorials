#include<iostream>
#include"BankAccount.h"

using namespace std;

int main()
{
	BankAccount ba1;
	ba1.openNewUserAccount(12345, "Kane", "Williams", 45000);
	BankAccount ba2;
	ba2.openNewUserAccount(34545, "Sachin", "Tendulkar", 33000);
	BankAccount ba3;
	ba3.openNewUserAccount(54345, "Ricky", "Pointing", 55000);
	BankAccount ba4;
	ba4.openNewUserAccount(76788, "Tim", "Paine", 33200);
	BankAccount ba5;
	ba5.openNewUserAccount(34778, "Rick", "Jones", 70000);
	ba1.displayFullAccounts();
	cout << "__ Displaying BankAccount#1 Details __" << endl;
	ba1.displayAccountStatus(ba1.AccountNo);
	ba2.withdrawMoney(ba2.AccountNo, 22000);
	ba3.depositMoney(ba3.AccountNo, 45000);
	cout << "__ Displaying BankAccount#2 Details __" << endl;
	ba2.displayAccountStatus(ba2.AccountNo);
	cout << "__ Displaying BankAccount#3 Details __" << endl;
	ba3.displayAccountStatus(ba3.AccountNo);
	return 0;
}