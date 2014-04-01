#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  vector<int> ivec;
  for(int i=0;i<100;i++)
	ivec.push_back(i);

  cout << ivec.size() << endl;
  return 0;
}
