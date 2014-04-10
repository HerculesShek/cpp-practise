#include <iostream>

using namespace std;

int main()
{
  unsigned short i = 1;
  unsigned short a = (i<<31)-1;
  cout << a << endl;
  cout << (i<<31) << endl;
  return 0;
}
