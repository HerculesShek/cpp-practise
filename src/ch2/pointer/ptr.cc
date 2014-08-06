#include <iostream>
using namespace std;

int main()
{
  int *a = nullptr;
  double b = 3.56;
  double *const bp = &b;
  *bp = .999;
  return 0;
} 
