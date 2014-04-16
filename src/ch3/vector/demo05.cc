#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<string> sv{10};
  for(string s : sv)
	cout << s << endl;

  return 0;
}
