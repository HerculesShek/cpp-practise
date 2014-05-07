#include <deque>
#include <string>
#include <stack>
#include <iostream>
using namespace std;

int main()
{
  stack<int> si;

  for(size_t ix=0; ix != 10; ++ix)
	si.push(ix);
  
  while(!si.empty()){
	cout << si.top() << " ";
	si.pop();
  }
  cout << endl;
  
  return 0;
}
