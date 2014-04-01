#include <string>
#include <iostream>
using namespace std;

int main()
{
  string name = "jack";
  auto a = name.begin();
  if(a!= name.end())
	*a = toupper(*a);


  cout << name << endl;

  
  return 0;
}
