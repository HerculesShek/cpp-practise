#include <iostream>

using namespace std;

int main()
{
  int a = -9;
  unsigned long ulval = a;

  cout << ulval << endl;

  long l = ulval;
  cout << l << endl;
  
  long l2 = a;
  cout << l2 << endl;

  return 0;
} 
