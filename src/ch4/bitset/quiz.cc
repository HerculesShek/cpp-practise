#include <iostream>

using namespace std;

int main()
{
  unsigned long quiz = 0;
  
  quiz |= 1UL<<27;
  bool a = quiz & 1UL<<27;
  cout << a <<endl;
  
  quiz ^= 1UL<<27;

  a = quiz & 1UL<<27;
  cout << a <<endl;

  cout << quiz << endl;
  return 0;
}
