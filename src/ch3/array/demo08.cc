#include <iostream>
#include <cstring>
#include <cstddef>
using namespace std;
int main()
{
  string name({'a','a','\0'});

  const char *namec = name.c_str();
 
  cout << namec << endl;

  return 0;
  
}
