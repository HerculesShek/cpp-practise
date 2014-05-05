#include <string>
#include <list>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
  list<const char*> names{"jack", "tom", "hanks"};
  vector<string> oldStyle;
  
  oldStyle.assign(names.begin(), names.end());

  for(auto a : oldStyle)
	cout << a << endl;

  list<string> slist1{1};
  slist1.assign(10, "hi");
  for(auto a : slist1)
	cout << a << endl;

  return 0;
}
