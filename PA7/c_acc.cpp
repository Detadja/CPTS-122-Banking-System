#include "c_acc.h"

//Manually sets the customer's balance.
void C_Acc::set_balance(double bal)
{
	balance = bal;
}

//Display's the customer's current balance.
double C_Acc::get_balance()
{
	return balance;
}

//Adds the deposited amount to the account balance and increment the number of deposits.
void C_Acc::deposit(double depo)
{
	balance += depo;
	num_deposits++;
}

//Checks if the withdrawal amount is more than the amount in the balace and charge a $15 service. If there isnt enough in the account, then the customer will owe the bank the
//remaining amount. If not, then subtracts the withdrawed amount from the account balance and increment the number of withdrawals.
void C_Acc::withdraw(double with)
{
	if (balance - with < 0)
	{
		std::cout << "Acces denied. You have insufficient funds for this transaction." << std::endl;
		balance -= 15;
		if (balance < 0) //Checks if the customer has obtained debt, and counts it.
		{
			while (balance < 0)
			{
				balance++;
				debt++;
			}
		}
		std::cout << "Transaction cancelled." << std::endl;
	}
	else
	{
		B_Acc::withdraw(with);
	}
}

//Adds the monthly fee of $5 + $0.01 per withdrawal, before subtracting the monthly service charge from the balance, calls the calc_int() function, and sets the number of withdrawals
//and deposits, and the monthly service charges to zero.
void C_Acc::monthly_proc()
{
	mon_service_charges += (5 + 0.10 * num_withdrawals);

	B_Acc::monthly_proc();
}