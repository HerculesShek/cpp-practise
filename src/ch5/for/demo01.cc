#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> iv = {0,1,2,3,4,5,6,7,8,9};
  for(auto &r : iv)
	r *= r;
  for(auto iter = iv.begin(), end = iv.end(); iter != end;
	  ++iter){
	auto &r = *iter;
	r *= r;
  }

  for(auto r : iv)
	cout << r << endl;


  return 0;
}
