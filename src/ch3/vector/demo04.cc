#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> iv(10);
  for(int i : iv)
	cout << i << endl;

  return 0;
}
