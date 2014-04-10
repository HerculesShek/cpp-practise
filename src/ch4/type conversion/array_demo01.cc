#include <iostream>

using namespace std;

int main()
{
  int a[10] = {1,2,3,4,5,6,7,8,9,10};
  int *p = a;
  
  auto b = &a;
  for(int i : a)
	cout << i << endl;

  
  return 0;
}

