#include <iostream>

using namespace std;

int main()
{
  unsigned char bits = 0233;
  auto a = bits<<8;
  cout << a << endl;

  unsigned b = bits<<31;
  cout << b << endl;

  auto c = bits>>3;
  cout << c<< endl;

  return 0;
}
