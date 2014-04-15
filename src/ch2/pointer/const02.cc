#include <iostream>
#include <string>

using namespace std;

constexpr double pi = 3.14159;

int user_cnt = 100;

int main()
{
  string name("zhangsan");
  const string &nick = name;
  string &a = nick;


  return 0;
}
