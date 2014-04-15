#include <iostream>

using namespace std;

int main()
{
  int a = 42;
  const int *const b = &a;


  int c = 100;

  decltype(b) d = &c;

  *d = 88;
  return 0;
} 
