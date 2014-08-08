#include <iostream>
#include <typeinfo>
#include "Sales_item.h"

using namespace std;

int main()
{
  int a = 42;
  int &b = a;

  const decltype(a) e = 99;
  const decltype(b) c = a, d = a;

  cout << e << endl;
  cout << c << endl;
  return 0;
}
