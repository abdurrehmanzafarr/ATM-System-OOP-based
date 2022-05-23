#include "complexatm.h"
#pragma once
#include"ATM.h"
#include"user.h"
#include<iostream>
using namespace std;
complexatm::complexatm(complexatm& obj)
{
    menu = obj.menu;
}
complexatm::complexatm(user& u1)
    {
        menu = 0;
        display();
        if (menu == 1)
        {
            u1.withdraw();
        }
        else if (menu == 2)
        {
            u1.balanceinquiry();
        }
        else if (menu == 3)
        {
            u1.transfermoney();
        }
        else if (menu == 4)
        {
            u1.changepin();
        }
        else if (menu == 5)
        {
            cout << u1;
        }
    }
    void complexatm::display()
    {
        cout << "                 ONEPLUS complex ATM" << endl;
        cout << "Press 1 to withdrawal" << endl;
        cout << "Press 2 for balance inquiry" << endl;
        cout << "Press 3 to transfer money" << endl;
        cout << "Press 4 to change your PIN" << endl;
        cout << "Press 5 to display information" << endl;
        cin >> menu;
    }
