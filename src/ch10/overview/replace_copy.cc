#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(int argc, char const *argv[])
{
  vector<int> a{1,2,3}, b;
  replace_copy(a.cbegin(), a.cend(), back_inserter(b), 1, 5);

  for(int a:b)
	cout << a << " ";
  cout << endl;


  return 0;
}
