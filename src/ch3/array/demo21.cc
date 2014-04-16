#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  int a[8] = {1,2};
  for(int i : a)
	cout << i << endl;

  vector<string> sv{4, "hyy"};
  for(string s : sv)
	cout << s << endl;
  

  char a3[] = "jack";
  auto len = sizeof(a3) / (sizeof(*a3));
  cout << len << endl;

  
  a = {2,4,6};

  return 0;
} 
