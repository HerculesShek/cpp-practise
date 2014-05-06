#include <vector>
#include <iostream>
using namespace std;

int main()
{
  vector<int> vi = {0,1,2,3,4,5,6,7,8,9};
  auto curr = vi.begin();
  while(curr != vi.end()){
	if(*curr % 2){
	  vi.insert(curr, *curr);
	  curr+=2;
	} else
	  curr = vi.erase(curr);
  }

  for(auto a : vi){
	cout << a << " ";
  }
  cout << endl;
  return 0;
}
