#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  vector<int> v{1,2,3,4,5,6,7,8,9};
  for(int &i : v)
	i = i*i;
  for(auto i : v)
	cout << i << endl;
  return 0;
}
