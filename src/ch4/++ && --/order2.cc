#include <iostream>
#include <string>

using namespace std;

int main()
{
  string text = "Here is something";
  auto c = text.begin();
  while(c != text.end() && !isspace(*c))
	*c = toupper(*c++);

  cout << text << endl;
  return 0;
}
