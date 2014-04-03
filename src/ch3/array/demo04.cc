#include <iostream>
#include <cstring>
#include <cstddef>
using namespace std;
int main()
{
  char ca1[] = {'C', '+', '+', '\0'};
  char ca2[] = {'n', 'a', 'm', '\0'};
  ptrdiff_t len1 = end(ca1) - begin(ca1);
  ptrdiff_t len2 = end(ca2) - begin(ca2);

  char large[len1+len2-1];
  strcpy(large, ca1);
  cout << strlen(large) << endl;  // prints 3
  strcat(large, ca2);
  cout << large << endl;    // prints "C++nam"
  cout << strlen(large) << endl; // prints 6
  return 0;
}
