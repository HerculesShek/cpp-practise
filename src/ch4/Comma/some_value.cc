#include <iostream>
using namespace std;

int main()
{
  int x = 6, y = 7;
  int res = ('a' ? ++x, ++y : --x, --y);
  cout << x << " " << y << endl;
  cout << res << endl;
  return 0;
}
