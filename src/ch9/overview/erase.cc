#include <list>
#include <iostream>
using namespace std;

void print(const list<int> li)
{
  for(int a:li)
	cout << a << " ";
  cout << endl;
}

int main()
{
  list<int> l{0,1,2,3,4,5};
  auto res = l.erase(l.begin(), --l.end());
  print(l);
  cout << *res << endl;

  return 0;
} 
