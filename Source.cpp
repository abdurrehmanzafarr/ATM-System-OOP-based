#include<iostream>
#include<stdlib.h>
#include"user.h"
#include"ATM.h"
#include"basicatm.h"
#include"complexatm.h"
using namespace std;
int main()
{
	user user1;
	cin >> user1;
	system("CLS");

	while (true)
	{
		ATM card1(user1);
		cin >> card1;
		system("CLS");

		if (card1.atmtype == 1)
		{
			basicatm ba1(user1);
		}
		else if (card1.atmtype == 2)
		{
			complexatm catm1(user1);
		}
		cout << endl<<"Do you want to Log out or Continue? Press 0 to Logout & 1 to Continue ";
		int temp = 0;
		cin >> temp;
		if (temp == 0)
			break;
		system("CLS");
	}
}