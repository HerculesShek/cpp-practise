#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
  int a[3][4] = {{0},{1},{2}};
  for(int i=0;i<3;i++)
	for(int j=0;j<4;j++)
	  cout << a[i][j] << endl;

  int b[3] = {5};
  cout << "b[1]的值是：" <<  b[1] << endl;

  return 0;
}
