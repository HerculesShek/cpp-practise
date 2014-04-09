#include <iostream>

using namespace std;

int main()
{
  unsigned char b1 = 0145;
  unsigned char b2 = 0257;
  auto a = b1 & b2;
  auto o = b1 | b2;
  auto x = b1 ^ b2;
  cout << a << endl;
  cout << o << endl;
  cout << x << endl;
  return 0;
}
