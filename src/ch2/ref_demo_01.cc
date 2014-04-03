#include <iostream>
using namespace std;

int foo(const int &a)
{
  return a+99;
}

int main()
{
  const int &r = foo(1);

  cout << r << endl;

  return 0;
}
