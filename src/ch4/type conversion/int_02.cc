#include <iostream>

using namespace std;

int main()
{
  unsigned short i = 1;
  signed short b = -32767;
  auto c = b + i;
  cout << c << endl;
  return 0;
}

