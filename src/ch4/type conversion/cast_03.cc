#include <iostream>

using namespace std;

int main()
{
  const char *p = "abc";
  //  char *q = static_cast<char*>(p); // error! const char* -->> char*
  string s = static_cast<string>(p); // ok, convert string literal to string 
  string s2 = const_cast<string>(p); // error! const_cast changes only constness!!!
  return 0;
} 
