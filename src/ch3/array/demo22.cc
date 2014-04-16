#include <iostream>
#include <iterator>

using namespace std;

int main()
{
  int a[5] = {1,2,3,4,5};
  int *mid = a+2;
  int val = mid[-1];

  cout << val << endl;
  


  return 0;
} 
