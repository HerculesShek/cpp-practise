#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name = "zhangsan";
  const string *ps = &name;
  const void *temp_1 = static_cast<const void*>(ps);
  void *res = const_cast<void*>(temp_1);

  void *pv = (void*)ps;


  char a = 'a', *pc = &a;
  int i = int(*pc);


  return 0;
} 
