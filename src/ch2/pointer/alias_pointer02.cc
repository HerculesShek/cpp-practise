#include <iostream>
#include <typeinfo>

using namespace std;
int main()
{
  // typedef char *pstring;
  using pstring = char *;
  const pstring *p2;   // p2 is a pointer to a constant pointer to char
  char name = 'a';
  const pstring p1 = &name;
  *p1 = 'b';
  p2 = &p1;
  cout << " " << *p1 << ", "<< **p2 << endl;

  return 0;
}
