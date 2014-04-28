#include <iostream>
using namespace std;
void f();
struct X{
  friend void f() 
  {
	cout << "friend f..." << endl;
  }
  X() {f();}
  void g();
  void h();
};

void X::g() {f();}
void f();
void X::h() {f();}

int main()
{
  X x;
  return 0;
}
