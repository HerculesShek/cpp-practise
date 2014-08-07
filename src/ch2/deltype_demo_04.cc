#include <iostream>
#include <typeinfo>
#include "Sales_item.h"

using namespace std;

int main()
{

  int i = 42;
  decltype(i) b = 99;
  decltype((i)) c = b;
  cout << c << endl;
  cout << typeid(c).name() << endl;

  int count = 7, num = 55;
  (count = num) = 42;
  cout << count << ", " << num << endl;

  return 0;
}
