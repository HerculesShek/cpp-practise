#include <iostream>

using namespace std;

int main()
{
  const int a = 52;
  const auto pa = &a;
  
  *pa = 42;
  pa = nullptr;
  cout << a << endl;


  return 0;
} 
