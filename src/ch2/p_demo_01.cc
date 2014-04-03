#include <iostream>
using namespace std;

int main()
{
  int *p = &66;
  *p++;
  cout << p << endl;
  cout << *p << endl;
  return 0;
} 
