#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
  constexpr size_t rowCnt = 3, colCnt = 4;
  int a[rowCnt][colCnt];
  for(int i=0;i!=rowCnt;i++)
	for(int j=0;j!=colCnt;j++)
	  a[i][j] = (i+1)*(j+1);

  for(int i=0;i!=rowCnt;i++)
	for(int j=0;j!=colCnt;j++)
	  cout << a[i][j] << endl;

  return 0;
}
