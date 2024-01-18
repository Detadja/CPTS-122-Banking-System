#include "b_acc.h"
#include "s_acc.h"
#include "c_acc.h"

using namespace std;

int main()
{
	B_Acc Bank(1000, 0, 0, 0.5, 2);
	S_Acc Saving(1000, 0, 0, 0.5, 2);
	C_Acc Checking(1000, 0, 0, 0.5, 2);
	double deposit = 0.0, withdraw = 0.0;

	//Tests the Bank account class
	Bank.set_balance(500); //Setter function test
	cout << "Enter how much to deposit (Your current balance is " << Bank.get_balance() << "): "; //Getter function test
	cin >> deposit;
	Bank.deposit(deposit); //Deposit function test

	cout << "Enter how much to withdraw from your account (Your current balance is " << Bank.get_balance() << "): ";
	cin >> withdraw;
	Bank.withdraw(withdraw); //Withdrawal function test

	Bank.monthly_proc(); //Interest function and monthly charge function test
	cout << "\nAfter charging for the monthly service charge, your current balance after interest is now: " << Bank.get_balance() << endl;
	system("pause");
	system("cls");



	//Tests the Savings account class
	Saving.set_balance(500); //Setter function test
	cout << "Enter how much to deposit (Your current savings balance is " << Saving.get_balance() << "): "; //Getter function test
	cin >> deposit;
	Saving.deposit(deposit); //Deposit function and status function test

	cout << "Enter how much to withdraw from your savings account (Your current balance is " << Saving.get_balance() << "): ";
	cin >> withdraw;
	Saving.withdraw(withdraw); //Withdrawal function and status function test

	cout << "\nEnter again how much to withdraw from your savings account: ";
	cin >> withdraw;
	Saving.withdraw(withdraw);

	cout << "\nEnter again how much to withdraw from your savings account: ";
	cin >> withdraw;
	Saving.withdraw(withdraw);

	cout << "\nEnter again how much to withdraw from your savings account: ";
	cin >> withdraw;
	Saving.withdraw(withdraw);

	cout << "\nEnter again how much to withdraw from your savings account: ";
	cin >> withdraw;
	Saving.withdraw(withdraw);

	cout << "\nEnter how much to deposit into your savings account (Your current balance is " << Saving.get_balance() << "): ";
	cin >> deposit;
	Saving.deposit(deposit);

	Saving.monthly_proc(); //Withdrawal counter, interest function and monthly charge function test
	cout << "\nAfter charging for the monthly service charge, your current savings balance after interest is now: " <<  Saving.get_balance() << endl;
	system("pause");
	system("cls");



	//Tests the Checking account class
	Checking.set_balance(500); //Setter function test
	cout << "Enter how much to deposit (Your current checking balance is " << Checking.get_balance() << "): "; //Getter function test
	cin >> deposit;
	Checking.deposit(deposit); //Deposit function and status function test

	cout << "Enter how much to withdraw from your checking account (Your current balance is " << Checking.get_balance() << "): ";
	cin >> withdraw;
	Checking.withdraw(withdraw); //Withdrawal function, insuficient funds checking, and debt checking test

	Checking.monthly_proc(); //Interest function, monthly charge function and any additional fees test
	cout << "\nAfter charging for the monthly service charge, your current checking balance after interest is now: " << Checking.get_balance() << endl;

	return 0;
}