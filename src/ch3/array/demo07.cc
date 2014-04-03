#include <iostream>
#include <cstring>
#include <cstddef>
using namespace std;
int main()
{
  char name[] = {'a', 'b', '\0'};
  string s(name);
  cout << s << endl;
  cout << s.size() << endl;


  s+=name;
  cout << s << endl;
  cout << s.size() << endl;

  s = s+name;
  cout << s << endl;
  cout << s.size() << endl;

  return 0;
}
