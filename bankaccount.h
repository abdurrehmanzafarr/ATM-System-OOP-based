#pragma once
#include<iostream>
#include"card.h"
#include"savingaccount.h"
#include"checkingaccount.h"
using namespace std;
class bankaccount
{
private:
	char* bankname;
	char* branchname;
	float totalcash;
	int acctype;
public:
	card c1;
	savingaccount sa1;
	checkingaccount ca1;
	void deepcopy(char*&, char*&);
	bankaccount(char* bname = nullptr, char* brname = nullptr, float tcash = 0.0)
	{
		int temp = 0;
		if (bname != nullptr)
		{
			deepcopy(bankname, bname);
			deepcopy(branchname, brname);
		}
		else
		{
			bankname = bname;
			branchname = brname;
		}
		totalcash = tcash;
		acctype = 0;
		c1.setcard(0);
		ca1.setfpt(0.0);
		sa1.setintrate(0.0);
	}
	void createinvoice(int,int);
	bankaccount(bankaccount&);
	bankaccount& operator=(bankaccount&);
	bankaccount operator^(int);
	bankaccount operator%(int );
	bankaccount operator*();
	bankaccount operator-();
	int getacctyp()const;
	void setacctype(int);
	void setbank(char* );
	void setbranch(char* );
	float gettcash() const;
	void setcash(float );
	char* getbank()const;
	char* getbranch()const;
	const char* getacctype()const;
};

