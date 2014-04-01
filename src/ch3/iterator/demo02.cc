#include <string>
#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
  string name = "some thing";
  for(auto c = name.begin();
	  c!=name.end() && !isspace(*c);
	  ++c){
	cout<< typeid(c).name()<<endl;

	*c = toupper(*c);}
  cout << name << endl;
  return 0;
}
