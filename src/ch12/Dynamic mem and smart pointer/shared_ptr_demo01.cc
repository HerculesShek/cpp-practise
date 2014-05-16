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

  // shared_ptr that points to an int with value 42
  shared_ptr<int> p3 = make_shared<int>(42);
  // p4 points to a string with value 9999999999
  shared_ptr<string> p4 = make_shared<string>(10, ’9’);
  // p5 points to an int that is value initialized to 0
  shared_ptr<int> p5 = make_shared<int>();

  auto p = make_shared<int>(42); 
  auto q(p);


  return 0;
}
