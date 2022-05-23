#include "user.h"
#include<iostream>
#include<iomanip>
#include"card.h"
#include"bankaccount.h"
using namespace std;
user::user(user& obj)
{
	deepcopy(this->fname, obj.fname);
	deepcopy(this->address, obj.address);
	this->phonenum = obj.phonenum;
	b1 = obj.b1;
}
void user::deepcopy(char*& arr1, char*& arr)
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
void user::transfermoney()
{
	b1 % 0;
}
void user::balanceinquiry()
{
	*b1;
}
void user::changepin()
{
	b1 ^ 0;
}
void user::withdraw()
{
	-b1;
}
void user::setname(char*name)
{
	deepcopy(this->fname,name);
}
void user::setaddress(char* address)
{
	deepcopy(this->address, address);
}
void user::setphonenum(long double num)
{
	this->phonenum = num;
}
istream& operator>>(istream& input, user& obj)
{
	cout << "						WELCOME TO ONEPLUS ATM" << endl;
	float tempp = 0.0;
	int temp = 0;
	char waste[100] = { '\0' };
	cout << "Enter Your name : ";
	input.getline(waste, 99);
	obj.setname(waste);
	cout << "Enter Your address : ";
	input.getline(waste, 99);
	obj.setaddress(waste);
	cout << "Enter your Phone number : ";
	input >> obj.phonenum;
	input.ignore();
	cout << "Enter your bank name :";
	cin.getline(waste, 49);
	obj.b1.setbank(waste);
	cout << "Enter your branch name :";
	cin.getline(waste, 49);
	obj.b1.setbranch(waste);
	cout << "Enter the amount you have in your account : ";
	input >> tempp;
	obj.b1.setcash(tempp);
	cout << "Enter your Secret PIN code for ATM : ";
	input >> temp;
	obj.b1.c1.setpin(temp);
	cout << "Which account type do you have? Press 1 for saving account and Press 2 for checking account : ";
	input >> temp;
	obj.b1.setacctype(temp);
	return input;
}
 ostream& operator<<(ostream& output, user& obj)
{
	output << "Name :" << obj.fname << endl;
	output << "Address :" << obj.address << endl;
	std::cout << setprecision(16);
	output << "Phone Number :" << obj.phonenum << endl;
	output << "Bank Name : " << obj.b1.getbank() << endl << "Branch Name : " << obj.b1.getbranch() << endl;
	output << "Account Type " << obj.b1.getacctype() << endl;
	output << "Total Cash :" << obj.b1.gettcash() << endl;
	std::cout << setprecision(16);
	output << "ATM Card Num " << obj.b1.c1.getcardnum() << endl;
	output << "PIN CODE " << obj.b1.c1.getpin() << endl;
	return output;
}