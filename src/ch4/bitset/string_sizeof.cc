#include <iostream>

using namespace std;

int main()
{
  string name = "jackasdfasdfasdfasdf";
  int a = 33, *b = &a;
  auto x = sizeof(name);
  auto y = sizeof(b); 
  cout << x << endl;
  cout << y << endl;
  return 0;
}
