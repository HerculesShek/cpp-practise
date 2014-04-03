#include <iostream>
using namespace std;

int main()
{
  double d = 3.255;
  const int &r = d; // const double &r 

  cout << r << endl;

  d = 99.44;
  cout << r << endl;

  return 0;
}
