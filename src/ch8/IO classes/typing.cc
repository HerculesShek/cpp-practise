#include <iostream>

using namespace std;

int main()
{
  ostream *a = cin.tie();
  cout << a << endl;

  ostream *b = cin.tie(nullptr);
  cout << b << endl;

  a = cin.tie();
  cout << a << endl;

  return 0;
} 
