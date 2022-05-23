#pragma once
#include<iostream>
#include<iomanip>
#include"card.h"
#include"bankaccount.h"
using namespace std;
class user
{
private :
	char* fname;
	char* address;
	double phonenum;
public:
	bankaccount b1;
	void deepcopy(char*& , char*& );
	user(char* name = nullptr, char* address = nullptr, long double phonenum = 0,float tcash=0.0)
	{
		if (name != nullptr)
		{
			deepcopy(fname, name);
			deepcopy(this->address, address);
		}
		else
		{
			fname = nullptr;
			address = nullptr;
		}
		this->phonenum = phonenum;
		b1.setcash(tcash);
	}
	user(user& obj);
	void transfermoney();
	void balanceinquiry();
	void changepin();
	void withdraw();
	void setname(char* );
	void setaddress(char* );
	void setphonenum(long double );
	friend istream& operator>>(istream& , user& );
	friend ostream& operator<<(ostream& , user& );
};

