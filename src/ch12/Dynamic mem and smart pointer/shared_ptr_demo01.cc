#include <memory>
#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
  shared_ptr<string> p1;
  shared_ptr<list<int>> p2;
  if (p1 && p1->empty())
	*p1 = "hi"; 
  cout << *p1 << endl;
  
  return 0;
}
