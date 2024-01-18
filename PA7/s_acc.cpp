#include "s_acc.h"

//Manually sets the customer's balance.
void S_Acc::set_balance(double bal)
{
	balance = bal;
}

//Display's the customer's current balance.
double S_Acc::get_balance()
{
	return balance;
}

//Checks to see if the balance falls below $25
void S_Acc::status()
{
	if (balance < 25)
		is_inactive = true;
	else
		is_inactive = false;
}

//Checks for account inactivity, then subtracts the withdrawed amount from the account balance and increment the number of withdrawals.
void S_Acc::withdraw(double with)
{
	status();
	
	if (is_inactive) //If the account is inactive
	{
		std::cout << "Access denied. The account is currently inactive." << std::endl;
	}
	else //If its still active
	{
		B_Acc::withdraw(with);
	}
}

//Checks for account inactivity, then adds the deposited amount to the account balance and increment the number of deposits.
void S_Acc::deposit(double depo)
{
	status();
	
	if (is_inactive) //If the account is inactive
	{
		B_Acc::deposit(depo);
		status();
	}
	else //If its still active
	{
		B_Acc::deposit(depo);
	}
}

//Subtracts the monthly service charge from the balance, calls the calc_int() function, and sets the number of withdrawals and deposits, and the monthly service charges to zero.
//Then checks for account inactivity.
void S_Acc::monthly_proc()
{
	if (num_withdrawals > 4)
	{
		mon_service_charges += (num_withdrawals - 4);
	}

	status();

	B_Acc::monthly_proc();
}
