#include <iostream>
using namespace std;

int fact(int val)
{
  int res = 1;
  while(val > 1)
	res *= val--;
  return res;
}

int main()
{
  int res = fact(5.8);
  cout << "5! is " << res << endl;
  
  return 0;
}
