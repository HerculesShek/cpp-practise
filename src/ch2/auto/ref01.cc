#include <iostream>

using namespace std;

int main()
{
  double d = 3.14;
  auto &a = d;

  cout << a << endl;

  return 0;
} 
