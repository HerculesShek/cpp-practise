#include <iostream>
using namespace std;

int main()
{
  int a = 99;
  int *pa = &a, *pa2 = &a;
  if (pa == pa2)
	cout << "yes " << endl;
  int *c , *d;
  if (c == d)
	cout << "yes " << endl;
  int *e = 0;
  int *f = nullptr;
  if (e == f)
	cout << "yes " << endl;
}
