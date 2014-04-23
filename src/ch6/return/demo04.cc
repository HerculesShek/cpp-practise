#include <iostream>
#include <string>
using namespace std;

int odd[5] = {1,3,5,7,9};
int even[5] = {0,2,4,6,8};

decltype(odd) *hhh(int i)
{
  return (i%2 == 0) ? &even : &odd;
}

int main()
{
  cout << *hhh(2)[0] << endl;
  return 0;
} 
