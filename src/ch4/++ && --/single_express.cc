#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v = {3,2,5,-2,6};
  auto b = v.begin();
  while(b != v.end() && *b >= 0)
	cout << *b++ <<endl;
  return 0;
}
