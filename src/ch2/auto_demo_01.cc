#include <iostream>
#include <typeinfo>
#include "Sales_item.h"

using namespace std;

int main()
{
  auto a = 1 + 2;
  cout << "type of a: " << typeid(a).name() << '\n';
  cout << "type of 4.4: " << typeid(4.4).name()<<endl;
  return 0;
}
