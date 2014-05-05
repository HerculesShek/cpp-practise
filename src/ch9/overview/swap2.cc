#include <string>
#include <list>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
  string a("aaa"), b("bbb"), &c = a;
  string::iterator itra = a.begin();
  cout << *itra << endl;
  swap(a, b);
  cout << *itra << endl;
  cout << c << endl;
  return 0;
}
