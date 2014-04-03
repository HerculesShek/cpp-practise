#include <iostream>
using namespace std;

int main()
{
  int a = 88;
  int aa = 888;
  const int *b = &a;
  b = &aa;

  int *c = b;
  return 0;
}
