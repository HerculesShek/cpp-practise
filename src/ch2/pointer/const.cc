#include <iostream>

using namespace std;

int main()
{
  int *p1, *p2 = p1;

  if(p1 == p2)
	cout << "p1 equals p2" << endl;

  printf("%p", p1);
  cout << endl;
  printf("%p", p2);
  cout << endl;

  int *p3 = nullptr;
  printf("%p", p3);
  cout << endl;

  return 0;
}
