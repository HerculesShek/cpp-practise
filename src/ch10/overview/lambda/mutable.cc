#include <iostream>
using namespace std;

int main()
{
  int val = 42;
  auto f = [val]() mutable -> int {return ++val; };
  // auto f = [val]() mutable {return ++val; };
  val = 0;
  int b = f();
  cout << val << " " << b << endl;

  auto f2 = [&val]() -> int& {return ++val;};
  // auto f2 = [&val]() {return ++val;};
  int c = f2();
  cout << val << ", " << c << endl;
  c = f2();
  cout << val << ", " << c << endl;
  return 0;
}
