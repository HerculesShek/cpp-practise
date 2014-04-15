#include <typeinfo>
#include <iostream>

using namespace std;

int main()
{
  const char name[9] = "zhangsan";
  cout << typeid(name).name() << endl;
  return 0;
}
 
