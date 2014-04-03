#include <iostream>
using namespace std;

constexpr int size()
{
  return 55;
}

int main()
{
  constexpr int mf = 20;
  constexpr int a = mf + 1;
  constexpr int b = size();
  cout << a << " " << b << endl;
  return 0;
}
