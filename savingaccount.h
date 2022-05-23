#pragma once
#include<iostream>
using namespace std;
class savingaccount
{
private:
    float intrestrate;
public:
    savingaccount();
    savingaccount(savingaccount&);
    void setintrate(float );
    float calculateintrate(float );
};

