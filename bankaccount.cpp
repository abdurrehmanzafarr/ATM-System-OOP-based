#include "bankaccount.h"
#include<iostream>

#include<ctime>
#include<stdlib.h>
#include"card.h"
#include"savingaccount.h"
#include"checkingaccount.h"
using namespace std;
void bankaccount::deepcopy(char*& arr1, char*& arr)
{
	int size = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		size++;
	}
	arr1 = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		arr1[i] = arr[i];
	}
	arr1[size] = '\0';
}
bankaccount bankaccount::operator^(int a)
{
	cout << "Enter new PIN : ";
	int temp = 0;
	cin >> temp;
	c1.setpin(temp);
	cout << "PIN successfully changed";
	return *this;
}
bankaccount::bankaccount(bankaccount& obj)
{
	bankname = obj.bankname;
	branchname = obj.branchname;
	totalcash = obj.totalcash;
	acctype = obj.acctype;
	c1 = obj.c1;
	ca1 = obj.ca1;
	sa1 = obj.sa1;
}
bankaccount& bankaccount::operator=(bankaccount&obj)
{
	bankname = obj.bankname;
	branchname = obj.branchname;
	totalcash = obj.totalcash;
	acctype = obj.acctype;
	c1 = obj.c1;
	ca1=obj.ca1;
	sa1=obj.sa1;
	return *this;
}
bankaccount bankaccount::operator%(int a)
{
	cout << "How much you want to transfer ";
	int amount = 0;
	cout << "\n 50 \n 100 \n 500" << endl;
	cin >> amount;
	while (amount != 50 && amount != 100 && amount != 500)
	{
		cout << "Please enter only given amounts :";
		cin >> amount;
	}
	if (totalcash > amount)
	{
		this->totalcash = this->totalcash - amount;
		this->totalcash = this->totalcash - ca1.getfpt();
		cout << "Enter account number ";
		char waste[50] = {'\0'};
		cin >> waste;
		cout << "Amount transferred Successfully " << endl;
		createinvoice(amount, 2);
	}
	else
		cout << "You dont have enough balance to proceed this transaction."<<endl;
	
	return *this;
}
bankaccount bankaccount::operator*()
{
	cout << "Card Number : " << c1.getcardnum() << endl;
	cout << "Account type :" << getacctype() << endl;
	cout << "Remaining Balance : " << gettcash() << endl;
	return *this;
}
bankaccount bankaccount::operator-()
{
	int amount = 0;
	cout << "How much you want withdraw\n->50\n->100\n->500" << endl;
	cin >> amount;
	while (amount != 50 && amount != 100 && amount != 500)
	{
		cout << "Please enter only given amounts :";
		cin >> amount;
	}
	if (totalcash > amount)
	{
		this->totalcash = this->totalcash - amount;
		this->totalcash = this->totalcash - ca1.getfpt();
		createinvoice(amount, 1);
	}
	else
	{
		cout << "You dont have enough balance to proceed this transaction"<<endl;
	}
	
	return *this;
}
void bankaccount::createinvoice(int a,int b)
{
	system("CLS");
	cout << "						ONEPLUS ATM" << endl;
	cout << "-------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "					*****Invoice*****"<<endl;
#pragma warning(disable:4996)
	time_t ttime = time(0);

	char* dt = ctime( &ttime);
	cout << "Date and time : " << dt << endl;
#pragma warning(default:4996)
	cout << "Machine Location : ONEPLUS ATM Allama Iqbal Town , Lahore." << endl;
	cout << "Type Of transaction : ";
	if (b == 1)
	{
		cout << "Withdraw " << endl;
		cout << "Amount Withdrawn : " << a << endl;
	}
	else if (b == 2)
	{
		cout << "Transfer " << endl;
		cout << "Amount Transferred : " << a << endl;
	}
	cout << "Transaction fee : " << ca1.getfpt() << endl;
	cout << "-----------Account Details-----------"<<endl;
	cout << "Account Number : " << c1.getcardnum() << endl;
	cout << "Remaining Amount : "<<gettcash()<<endl; 
	cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "					thanks for using ONEPLUS ATM" << endl;
}
int bankaccount::getacctyp()const
{
	return acctype;
}
void bankaccount::setacctype(int a)
{
	acctype = a;
}
void bankaccount::setbank(char* bname)
{
	deepcopy(bankname, bname);
}
void bankaccount::setbranch(char* bname)
{
	deepcopy(branchname , bname);
}
float bankaccount::gettcash() const
{
	return totalcash;
}
void bankaccount::setcash(float tcash)
{
	totalcash = tcash;
}
char* bankaccount::getbank()const
{
	return bankname;
}
char* bankaccount::getbranch()const
{
	return branchname;
}
const char* bankaccount::getacctype()const
{
	if (acctype == 1)
	{
		const char* ptr = "Saving Account";
		return ptr;
	}
	else if (acctype == 2)
	{
		const char* ptr = "Checking Account";
		return ptr;
	}
}