#include <iostream>

using namespace std;

int main()
{
  int a = 99;
  int *const b = &a;
  *b = 9999;
  cout << a << endl;

  b = nullptr;

  return 0;
}
