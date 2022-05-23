#pragma once
#include<iostream>
#include<iomanip>
using namespace std;
class card
{
private:
	long double cardnum;
	int pin;
public:
	card();
	card(card&);
	void setcard(int );
	void setpin(int );
	long double getcardnum()const;
	int getpin();
};

