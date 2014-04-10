#include <iostream>

using namespace std;

int main()
{
  char a = 0245; // 就是-91
  cout << (int)a << endl;
  unsigned int b = 100;

  auto d = (unsigned int)a; // 4294967205
  cout << d << endl;
  auto c = b-a;
  cout << c << endl;
  auto e = b-d;
  cout << e << endl;

  return 0;
}
