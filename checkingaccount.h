#pragma once
class checkingaccount
{
private:
    float feepertransaction;
public:
    checkingaccount();
    checkingaccount(checkingaccount&);
    void setfpt(float a);
    float getfpt() const;
};

