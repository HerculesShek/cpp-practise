#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
  constexpr size_t rowCnt = 3, colCnt = 4;
  int a[rowCnt][colCnt];

  int v = 0;
  for(auto &i : a)
	for(auto &j : i){
	  j=v++;
	}
  for(const auto &i : a)
	for(auto j : i){
	  cout << j << endl;
	}
  return 0;
}
