#include "savingaccount.h"
#include<iostream>
using namespace std;
savingaccount::savingaccount()
{
    intrestrate = 0.0;
}
savingaccount::savingaccount(savingaccount& obj)
{
    intrestrate = obj.intrestrate;
}
void savingaccount::setintrate(float i)
{
    intrestrate = 0.0;
}
float savingaccount::calculateintrate(float a)
{
    float temp = 0.0;
    float principle = 1000.0;
    float rateofint = 5.0;
    float tperiod = 1 / 12;
    if (a > principle)
    {
        temp = a / principle;
        intrestrate = (principle * rateofint * tperiod) / 100;
        intrestrate = intrestrate * temp;
    }
    return intrestrate;
}