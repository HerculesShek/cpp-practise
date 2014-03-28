#include <iostream>
#include <typeinfo>
#include "Sales_item.h"

using namespace std;

int main()
{
  const int ci = 42;
  const int &cj = ci;
  const int *cp = &ci;

  decltype(ci) a = ci;
  const decltype(cj) &b = a;


  cout << a << endl;
  cout << b << endl;

  return 0;
}
