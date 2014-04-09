#include <iostream>

using namespace std;

int main()
{
  auto a = sizeof(4+8);
  auto b = sizeof 4+9;
  cout << a << endl;
  cout << b << endl;

  return 0;
}
 
