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

  vector<string> sv{"aaa"};
  vector<string>::iterator itr = sv.begin();

  cout << *itr << endl;

  swap(oldStyle, sv);
  cout << *itr << endl;

  return 0;
}
