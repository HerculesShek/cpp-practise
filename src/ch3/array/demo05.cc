#include <iostream>
#include <cstring>
#include <cstddef>
using namespace std;
int main()
{
  const char ca[] = {'h','e','l'};
  const char *cp = ca;
  while (*cp) {
	cout << *cp << endl;
	++cp;
  }
  return 0;
}
