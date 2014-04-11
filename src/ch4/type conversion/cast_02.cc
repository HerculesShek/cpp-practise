#include <iostream>

using namespace std;

int main()
{
  char a = 'a';
  const char *pc = &a;
  char *p = const_cast<char*>(pc);

  cout << *p << endl;

  return 0;
} 
