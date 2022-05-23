#include "card.h"
#include<iostream>
#include<iomanip>
using namespace std;
card::card()
	{
		cardnum = 0;
		pin = 0;
	}
card::card(card& obj)
	{
		cardnum = obj.cardnum;
		pin = obj.pin;
	}
	void card::setcard(int p)
	{
		srand(time(0));
		cardnum = rand() % 1234567891234567 + 4123456789234569;
		pin = p;
	}
	void card::setpin(int p)
	{
		pin = p;
	}
	long double card::getcardnum()const
	{
		return cardnum;
	}
	int card::getpin()
	{
		return pin;
	}
