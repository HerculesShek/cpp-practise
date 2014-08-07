#include <iostream>
#include <string>

using namespace std;

typedef const string* const_s;

using const_s2 = const string*;
using string_p = string*;

int main()
{
  string name("zhangsan");
  const_s nick = &name;

  const_s2 nick2 = nick;
  cout << *nick << endl;
  cout << *nick2 << endl;

  string str("jack");
  const string_p cp = &str;
  cp = 0; // error cp is read-only
  string_p const cp3 = &str;
  cp3 = nullptr;
  cout << *cp << endl;
  const string_p cp2 = nick; // error conversion from const string* to string*
  cout << *cp2 << endl;
  return 0;
}
