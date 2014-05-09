#include <iostream>
using namespace std;

int main()
{
  int val = 42;

  auto f = [val]() mutable {return ++val; };

  val = 0;
  int b = f();
  
  cout << val << " " << b << endl;
  return 0;
}
