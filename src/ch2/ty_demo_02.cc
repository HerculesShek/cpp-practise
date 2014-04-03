#include <iostream>
#include "Sales_item.h"

using namespace std;

int main()
{
  typedef char *pstring;
  const pstring *p2; 
  char name = 'a';
  const pstring  p1 = &name;
  *p1 = 'b';
  p2 = &p1;
  cout << *p1 << ", "<< **p2 << endl;
  return 0;
}
