#include <vector>
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
  vector<int> iv{0,1,2,3,4,5,6,7,8,9};
  for(auto r_iter = iv.crbegin();
	  r_iter != iv.crend();
	  ++r_iter)
	cout << *r_iter << endl;

  return 0;
} 
