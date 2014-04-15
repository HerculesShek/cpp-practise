#include <iostream>
#include <string>

using namespace std;

typedef const string* const_s;

using const_s2 = const string*;

int main()
{
  string name("zhangsan");
  const_s nick = &name;

  const_s2 nick2 = nick;
  cout << *nick << endl;
  cout << *nick2 << endl;


  return 0;
}
