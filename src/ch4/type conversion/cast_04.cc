#include <iostream>

using namespace std;

int main()
{
  int i = 97, *ip = &i;
  char *pc = reinterpret_cast<char*>(ip);
  cout << *pc << endl;
  string s(pc);
  cout << s << endl;
  return 0;
} 
