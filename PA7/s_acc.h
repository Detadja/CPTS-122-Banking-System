#ifndef S_ACC_H
#define S_ACC_H
#include <iostream>
#include "b_acc.h"

class S_Acc : public B_Acc
{
private:
	bool is_inactive;

public:
	
	//Constructor
	S_Acc()
	{
		B_Acc();
		is_inactive = false;
	}

	//Custom Constructor
	S_Acc(double n_bal, int n_deps, int n_withs, double n_rate, double n_charges)
	{
		balance = n_bal;
		num_deposits = n_deps;
		num_withdrawals = n_withs;
		ann_interest_rate = n_rate;
		mon_service_charges = n_charges;
		is_inactive = false;
	}

	void set_balance(double); //Manually sets the customer's balance.
	double get_balance(); //Display's the customer's current balance.
	void status(); //Checks to see if the balance falls below $25
	void deposit(double); //Checks for account inactivity, then adds the deposited amount to the account balance and increment the number of deposits.
	void withdraw(double); //Checks for account inactivity, then subtracts the withdrawed amount from the account balance and increment the number of withdrawals.
	void monthly_proc(); //Subtracts the monthly service charge from the balance, calls the calc_int() function, and sets the number of withdrawals and deposits, and the monthly 
	                     //service charges to zero.
};

#endif