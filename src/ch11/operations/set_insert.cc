#include <set>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
  vector<int> ivec = {2,4,6,8,2,4,6,8}; 
  set<int> set2; 
  set2.insert(ivec.cbegin(), ivec.cend()); 
  set2.insert({1,3,5,7,1,3,5,7}); 
  set2.insert(42);

  for(auto a : set2)
	cout << a << endl;

  return 0;
}
