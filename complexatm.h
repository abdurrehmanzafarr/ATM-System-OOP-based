#pragma once
#include"ATM.h"
#include"user.h"
#include<iostream>
using namespace std;
class complexatm:public ATM
{
private:
    int menu;
public:
    complexatm(int m = 0)
    {
        menu = m;
    }
    complexatm(complexatm&);
    complexatm(user& );
    void display();
};

