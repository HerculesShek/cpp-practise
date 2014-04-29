#include <iostream>
#include "Account.h"

int main()
{
  Account a, *pa = &a;
  double r = a.rate(), r2 = pa->rate();
  return 0;
}

