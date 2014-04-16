#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<string> sv{"aaa", "bbb", "ccc"};
  for(vector<string>::const_iterator iter = sv.cbegin();
	  iter != sv.cend();
	  ++iter)
	cout << *iter << endl;


  return 0;
}
