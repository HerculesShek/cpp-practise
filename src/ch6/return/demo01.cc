#include <iostream>
#include <string>

using namespace std;

string& hhh()
{
  static string name("zhangsan");
  string &nick = name;
  cout << nick << endl;
  return nick;
}


int main()
{
  cout << hhh() << endl;
  return 0;
} 
