#include <iostream>

using namespace std;

int main()
{
  int i = 97, *ip = &i;
  char *c = (char*)ip;
  cout << *c << endl;
  return 0;
} 
