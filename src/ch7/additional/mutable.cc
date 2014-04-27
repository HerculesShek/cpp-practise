#include <iostream>
using namespace std;

class Screen{
public:
  void some_mem() const;
  unsigned cnt() const; 
private:
  mutable unsigned access_ctr = 0;
};

void Screen::some_mem() const
{
  ++access_ctr;
}

unsigned Screen::cnt() const 
{
  return access_ctr;
}

int main()
{
  Screen s;
  for(int i = 0; i!= 100; ++i)
	s.some_mem();
  cout << s.cnt() << endl;
  return 0;
}
