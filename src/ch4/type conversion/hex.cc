#include <iostream>

using namespace std;

int main()
{
  unsigned short s = 0Xfff4;
  cout << s << endl;

  int i = 100, sum = 0;
  for (int i = 1; i != 101; ++i)
	sum += i;
  std::cout << i << " " << sum << std::endl;


  return 0;
} 
