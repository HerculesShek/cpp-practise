#include "Account.h"

double Account::interestRate = initRate();
constexpr int Account::period;

void 
Account::rate(double r)
{
  interestRate = r;
}

double 
Account::initRate()
{
  return 1.0;
}



