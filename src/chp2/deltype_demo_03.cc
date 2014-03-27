#include <iostream>
#include <typeinfo>
#include "Sales_item.h"

using namespace std;

int main()
{

  int i = 42, *p = &i, &r = i, x = 100;
  decltype(r + 0) b; 
  decltype(*p) c = x;
  cout << c << endl;

  cout << typeid(c).name() << endl;
  return 0;
}
