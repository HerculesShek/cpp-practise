#include <iostream>

using namespace std;

int main()
{
  int a = 42, *p = &a, &r = a;
  decltype((r)) b = a;
  
  return 0;
} 
