#include <iostream>
#include "Sales_item.h"
using namespace std;

using S = Sales_item;

int main()
{
  S s1, s2, *p = &s1;
  size_t s = sizeof(S);
  cout << s << endl;

  s = sizeof (s1+s2);
  cout << s << endl;
  

  auto len = sizeof 3333+1;
  cout << "len:" << len << endl;


  auto len2 = sizeof *p;
  cout << len2 << endl;

  cout << sizeof 'a' << endl;

  return 0;
}
 
