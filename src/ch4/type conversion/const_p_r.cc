#include <iostream>

using namespace std;

int main()
{
  int a = 8;
  const int &r = a;
  const int *p = &a;
  int b = r, *q = p; // error!!!
  return 0;
}

