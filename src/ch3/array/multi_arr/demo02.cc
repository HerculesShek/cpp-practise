#include <iostream>

using namespace std;

int main()
{
  using int_arr = int [4];
  
  int val = 100; 

  constexpr int rows = 3, cols = 4;
  int a[rows][cols] = {};
  for(int (&i)[cols] : a)
	for(int &j : i)
	  j = val++;

  for(int_arr &i : a)
	for(auto &j : i)
	  cout << j << endl;

  return 0;
}
