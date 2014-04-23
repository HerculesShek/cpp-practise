#include "fac.h"
#include <iostream>

using namespace std;

void b()
{
  a = 777;
  int a = 99;
  foo();
}


int main()
{
  b();
  foo();
  a = 4444;
  foo();
  return 0;
}
