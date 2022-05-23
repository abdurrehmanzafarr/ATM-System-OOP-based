#pragma once
#include<iostream>
#include"user.h"
#include "ATM.h"
using namespace std;
class basicatm :
    public ATM
{
private:
    int menu;
public:
    basicatm(int m=0)
    {
        menu = m;
    }
    basicatm(basicatm&);
    basicatm(user& );
    void display();
};

