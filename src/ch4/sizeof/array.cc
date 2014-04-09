#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int a[] = {1,2,3,4,5,446,4545,999,3};
  constexpr size_t len = sizeof a/sizeof *a;
  cout << len << endl;

  int x[10]; int *p = x;
  cout << sizeof(x)/sizeof(*x) << endl;
  cout << sizeof(p) <<endl;
  cout << sizeof(p)/sizeof(*p) << endl;
  return 0;
}
 
