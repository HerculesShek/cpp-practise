#include <iostream>

using namespace std;

int main()
{
  const int a = 42;

  auto &b = a;
  b = 44;
  cout << b << endl;

  return 0;
} 
