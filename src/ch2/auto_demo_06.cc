#include <iostream>
#include <typeinfo>
#include "Sales_item.h"

using namespace std;

int main()
{
  Sales_item a, b;
  auto au = a+b;
  cout << typeid(au).name() <<endl;
  
  return 0;
}
