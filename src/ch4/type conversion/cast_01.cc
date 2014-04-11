#include <iostream>

using namespace std;

int main()
{
  int i = 4, j = 9;
  double res = static_cast<double>(j) / i;
  cout << res << endl;

  int a = 88, *p = &a;
  void *vp = p;
  int *p2 = static_cast<int*>(vp);
  cout << *p2 << endl;

  return 0;
} 
