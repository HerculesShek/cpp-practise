#include <iostream>
using namespace std;

int fact(int val)
{
  int res = 1;
  while(val > 1)
	res *= val--;
  return res;
}

int fabi(int i)
{
	if(i<=2)
		return 1;
	return fabi(i-1) + fabi(i-2);
}


int main()
{
  int res = fact(5);
  cout << "5! is " << res << endl;
  
  cout << "the 5th fabi num is " << fabi(5) << endl;
  return 0;
}
