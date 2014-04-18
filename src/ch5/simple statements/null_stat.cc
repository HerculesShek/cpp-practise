#include <iostream>

using namespace std;

int main()
{
  
  string s, sought = "jack";
  while(cin >> s && s != sought)
	;
  
  if(s == sought)
	cout << s << endl;
  return 0;
}
