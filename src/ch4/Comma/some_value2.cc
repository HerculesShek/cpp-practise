#include <iostream>
using namespace std;

int main()
{
  int x = 6, y = 7;
  int res = (false ? ++x, ++y : --x, 99999999);
  cout << x << " " << y << endl;
  cout << res << endl;
  return 0;
}

