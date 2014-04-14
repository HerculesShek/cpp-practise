#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name("zhangsan"), &nick = name, *p = &nick;

  cout << *p << endl;

  return 0;
} 
