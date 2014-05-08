#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
  vector<int> vi{23,33,42,44,55};
  vector<int>::iterator b = vi.begin();
  auto e = b+2;
  auto res = find(b, e, 42);
  if(res == e)
	cout << "not found" << endl;

  int ia[] = {27, 210, 12, 47, 232, 44};
  int val = 44;
  int *r = find(begin(ia), end(ia), val);
  cout << *r << endl;
  
  return 0;
} 
