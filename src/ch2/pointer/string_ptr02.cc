#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name("zhangsan"), &nick = name, *p = &nick;

  cout << *p << endl;
  
  const string &r = nick;

  const string *p2 = &r;

  return 0;
} 
