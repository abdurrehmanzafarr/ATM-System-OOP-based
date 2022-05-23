#include "checkingaccount.h"
checkingaccount::checkingaccount()
{
    feepertransaction = 50.0;
}
checkingaccount::checkingaccount(checkingaccount& obj)
{
    feepertransaction =obj.feepertransaction;
}
void checkingaccount::setfpt(float a)
{
    feepertransaction = 50.0;
}
float checkingaccount::getfpt() const
{
    return feepertransaction;
}