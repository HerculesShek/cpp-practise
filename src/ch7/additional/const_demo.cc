#include <iostream>

using namespace std;

int main()
{
  int a = 42;
  const int *b = &a;
  int &c = *b;
  c = 44;
  cout << c << endl;
  return 0;
} 
