#include <iostream>
#include <typeinfo>
#include "Sales_item.h"

using namespace std;

int main()
{
  int a = 42;
  int &b = a;

  const decltype(a) e = 99;
  e = 42; // error! e is read only
  decltype(b) c = a, d = a;

  const decltype(b) m = a; // error

  cout << e << endl;
  cout << c << endl;
  return 0;
}
