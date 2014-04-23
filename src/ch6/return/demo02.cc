#include <iostream>
#include <string>

using namespace std;
using arrT = int[10];

arrT hhh()
{
  return {0,1,2,3,4,5,6,7,8,9};
}


int main()
{
  cout << hhh()[0] << endl;
  return 0;
} 
