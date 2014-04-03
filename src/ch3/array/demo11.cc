#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
  int a[3][4]={
	{1,2,3,4},
	{5,6,7,8},
	{9,10,11,12}
  };
  cout << a[0][0] << endl;

  int b[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
  cout << b[1][2] << endl;
  return 0;
}
