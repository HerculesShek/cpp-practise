#include <iostream>

using namespace std;

int main()
{
  int a = 5;
  if(a)
	cout << "a is true" << endl;
  
  if(a == true)
	cout << "a is 1" << endl;

  a = 1;
  if(a == true)
	cout << "a is 1" << endl;

  return 0;
}
