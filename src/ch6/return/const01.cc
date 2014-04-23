#include <iostream>
#include <string>
using namespace std;

void a(const int &i)
{
  cout << "cccccccc" << endl;
}
void a(int &i)
{
  cout << "aaaaaa" << endl;
}

void a(const int *p)
{
  cout << "pppppp" << endl;
}

void a(int *p)
{
  cout << "pcpcpcpcppc" << endl;
}

int main()
{
  int n = 42;

  int *p = &n;
  const int *p2 = p;

  a(p);
  a(p2);
  return 0;
} 
