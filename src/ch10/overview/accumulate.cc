#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int main(int argc, char const *argv[])
{
  vector<int> is {1,2,3,4,5};
  int sum = accumulate(is.begin(), is.end(), 0);
  cout << sum << endl;
  return 0;
}
