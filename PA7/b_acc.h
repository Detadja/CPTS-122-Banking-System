#ifndef B_ACC_H
#define B_ACC_H
#include <iostream>

class B_Acc
{
protected:
	double balance;
	int num_deposits;
	int num_withdrawals;
	double ann_interest_rate;
	double mon_service_charges;

public:
	//Basic constructor
	B_Acc()
	{
		balance = 0.0;
		num_deposits = 0;
		num_withdrawals = 0;
		ann_interest_rate = 0.0;
		mon_service_charges = 0.0;
	}

	//Custom constructor
	B_Acc(double n_bal, int n_deps, int n_withs, double n_rate, double n_charges)
	{
		balance = n_bal;
		num_deposits = n_deps;
		num_withdrawals = n_withs;
		ann_interest_rate = n_rate;
		mon_service_charges = n_charges;
	}

	virtual void set_balance(double); //Manually sets the customer's balance.
	virtual double get_balance(); //Display's the customer's current balance.
	virtual void deposit(double); //Adds the deposited amount to the account balance and increment the number of deposits.
	virtual void withdraw(double); //Subtracts the withdrawed amount from the account balance and increment the number of withdrawals.
	virtual void calc_int(); //Calculates the monthly interest earned and updates the account by adding the interest into it.
	virtual void monthly_proc(); //Subtracts the monthly service charge from the balance, calls the calc_int() function, and sets the number of withdrawals and deposits, 
	                             //and the monthly service charges to zero.
};


#endif
