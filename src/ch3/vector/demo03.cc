#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  vector<unsigned> v(11, 0);
  unsigned n;
  while(cin >> n)
	if(n<=100)
	  ++v[n/10];
  
  for(auto a : v)
	cout << a << ", ";
  cout << endl;
  return 0;
}
