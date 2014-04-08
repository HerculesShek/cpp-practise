#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1 = "A string", *p = &s1;
  auto n = s1.size();
  n = (*p).size();
  n = p->size();
  return 0;
}
