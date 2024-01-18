#include "b_acc.h"

//Manually sets the customer's balance.
void B_Acc::set_balance(double bal)
{
	balance = bal;
}

//Display's the customer's current balance.
double B_Acc::get_balance()
{
	return balance;
}

//Adds the deposited amount to the account balance and increment the number of deposits.
void B_Acc::deposit(double depo)
{
	balance += depo;
	num_deposits++;
}

//Subtracts the withdrawed amount from the account balance and increment the number of withdrawals.
void B_Acc::withdraw(double with)
{
	balance -= with;
	num_withdrawals++;
}

//Calculates the monthly interest earned and updates the account by adding the interest into it.
void B_Acc::calc_int()
{
	double monthly_interest = 0.0, mont_int_rate = ann_interest_rate / 12;
	monthly_interest = balance * ann_interest_rate;
	balance = balance + monthly_interest;
}

//Subtracts the monthly service charge from the balance, calls the calc_int() function, and sets the number of withdrawals and deposits, and the monthly service charges to zero.
void B_Acc::monthly_proc()
{
	balance -= mon_service_charges;
	calc_int();
	num_deposits = num_withdrawals = mon_service_charges = 0;
}
