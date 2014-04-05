#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main()
{

  using int_arr =  int[4];
  typedef int int_arr2[4];

  constexpr size_t rowCnt = 3, colCnt = 4;
  int a[rowCnt][colCnt];
  int v = 0;
  for(auto &i : a)
	for(auto &j : i){
	  j=v++;
	}
  
  for(int_arr *p = a; p!= a+rowCnt; ++p)
	for(int *q = *p; q!=*p+colCnt; ++q)
	  cout << *q << ' ';
  cout << endl;
  return 0;
}
