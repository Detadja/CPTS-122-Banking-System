#ifndef C_ACC_H
#define C_ACC_H
#include <iostream>
#include "b_acc.h"

class C_Acc : public B_Acc
{
private:
	double debt;

public:
	//Constructor
	C_Acc()
	{
		B_Acc();
		debt = 0.0;
	}

	//Custom constructor
	C_Acc(double n_bal, int n_deps, int n_withs, double n_rate, double n_charges)
	{
		balance = n_bal;
		num_deposits = n_deps;
		num_withdrawals = n_withs;
		ann_interest_rate = n_rate;
		mon_service_charges = n_charges;
		debt = 0.0;
	}
	
	void set_balance(double); //Manually sets the customer's balance.
	double get_balance(); //Display's the customer's current balance.
	void deposit(double); //Adds the deposited amount to the account balance and increment the number of deposits.
	void withdraw(double); //Checks if the withdrawal amount is more than the amount in the balace and charge a $15 service. If there isnt enough in the account, then the customer 
	                       //will owe the bank the remaining amount. If not, then subtracts the withdrawed amount from the account balance and increment the number of withdrawals.
	void monthly_proc(); //Adds the monthly fee of $5 + $0.01 per withdrawal, before subtracting the monthly service charge from the balance, calls the calc_int() function, and sets 
	                     //the number of withdrawals and deposits, and the monthly service charges to zero.


};

#endif