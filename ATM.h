#pragma once
#include<iostream>
#include<iomanip>
#include"user.h"
using namespace std;
class ATM
{
private:

	long double checkcardnum;
	int pin;
	int checkpin;
public:
	int atmtype;
	ATM(long double ccn = 0, int p = 0)
	{
		checkcardnum = ccn;
		checkpin = p;
		pin = 0;
		atmtype = 0;
	}
	ATM(ATM&);
	ATM(user& );
	long double getcardnum();
	void setpincode(int pin);
	bool check();
	friend istream& operator>>(istream& , ATM& );
};

