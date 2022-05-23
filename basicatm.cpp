#include "basicatm.h"
#include<iostream>
#include"user.h"
#include "ATM.h"
using namespace std;
basicatm::basicatm(basicatm& obj)
{
    menu = obj.menu;
}
basicatm::basicatm(user& u1)
    {
        menu = 0;
        display();
        if (menu == 1)
        {
            u1.withdraw();
        }
        else if (menu == 2)
        {
            cout << u1;
        }
    }
    void basicatm::display()
    {
        cout << "                 ONEPLUS BASIC ATM" << endl;
        cout << "Press 1 to withdrawal" << endl << "Press 2 to display information" << endl;
        cin >> menu;
    }