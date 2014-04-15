#include <iostream>
#include <string>

using namespace std;


using pstring = const char *;

int main()
{
  const char name[] = "zhangsan";
  const pstring p = name;

  cout << p << endl;
  return 0;
}
