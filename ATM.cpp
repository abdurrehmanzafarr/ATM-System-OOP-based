#include "ATM.h"
#include<iostream>
#include<iomanip>
#include"user.h"
using namespace std;
ATM::ATM(user& user1)
{
	checkcardnum = 0;
	checkcardnum = user1.b1.c1.getcardnum();
	checkpin = 0;
	pin = 0;
	pin = user1.b1.c1.getpin();
	atmtype = 0;
}

ATM::ATM(ATM& obj)
{
	checkcardnum = obj.checkcardnum;
	checkpin = obj.checkpin;
	pin = obj.pin;
	atmtype = obj.atmtype;
}
long double ATM::getcardnum()
{
	return checkcardnum;
}
void ATM::setpincode(int pin)
{
	checkpin = pin;
}

bool ATM::check()
{
	if (pin == checkpin)
	{
		return true;
	}
	else
	{
		return false;
	}
}
istream& operator>>(istream& input, ATM& card1)
{
	cout << "						Welcome to ONEPLUS ATM " << endl;
	cout << "Thanks for inserting your Card." << endl;
	std::cout << setprecision(16);
	cout << "Card Number : " << card1.getcardnum() << endl;
	cout << "Please enter you PIN Code : ";
	int temp = 0;
	cin >> temp;
	card1.setpincode(temp);
	if (card1.check())
	{
		system("CLS");
		cout << "						Welcome to ONEPLUS ATM " << endl;
		cout << "PIN Verified" << endl;
	}
	else
	{
		while (!card1.check())
		{
			cout << "Wrong PIN. Kindly enter Correct PIN " << endl;
			cin >> temp;
			card1.setpincode(temp);
		}

		system("CLS");
		cout << "						Welcome to ONEPLUS ATM " << endl;
		cout << "PIN Verified" << endl;
	}
	cout << "Which ATM type you want to use ? " << endl << "Press 1 for Basic ATM" << endl << "Press 2 Complex ATM" << endl;
	cin >> card1.atmtype;
	return input;
}