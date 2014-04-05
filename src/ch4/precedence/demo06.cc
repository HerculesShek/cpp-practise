#include <iostream>

using namespace std;

int main()
{
  long a = 1<<30;
  
  long b = a*111111;

  cout << a << "  " << b << endl;
  
  cout << b%(a+1) << endl;

  return 0;
}
