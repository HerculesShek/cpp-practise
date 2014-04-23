#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name("aaa");
  const string &nick = name;
  string &r2 = const_cast<string&>(nick);
  r2[0] = 'b';
  cout << name << endl;

  return 0;
} 
