#include <iostream>
#include <string>

using namespace std;

int main()
{
  string text = "Here is something";
  for(auto b = text.begin(); b != text.end() && !isspace(*b); ++b)
	*b = toupper(*b); 

  cout << text << endl;
  return 0;
}
