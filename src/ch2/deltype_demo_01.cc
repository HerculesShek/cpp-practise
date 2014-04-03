#include <iostream>
#include <typeinfo>
#include "Sales_item.h"

using namespace std;

int main()
{
  const int ci = 99, &cj = ci;
  decltype(ci) a = ci;
  decltype(cj) b = a;

  a = 30; // error! a is a const int
  return 0;
}
