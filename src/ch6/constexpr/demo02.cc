#include <iostream>
#include <cstdlib>

using namespace std;

constexpr int a = 42;

constexpr int fact(int val)
{
  return a;
}

constexpr size_t foo(int a)
{
  return fact(a) * a;
}

int main()
{
  constexpr int b = fact(555);
  cout << b << endl;

  cout << foo(4) << endl;
  int bb = 33;
  cout << foo(bb) << endl;

  return 0;
} 
