#include <iostream>

using namespace std;

int main()
{
  int a = 5;
  const int *const thi = &a;
  const decltype(thi) c = &a;
  *c = 100;

  return 0;
} 
