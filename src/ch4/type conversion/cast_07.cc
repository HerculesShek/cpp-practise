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



  const string *const ps2 = &name;
  const void *tmp1 = static_cast<const void*>(ps2);







  return 0;
} 
