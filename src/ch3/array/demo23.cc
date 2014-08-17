#include <iostream>
#include <iterator>

using namespace std;

int main(){
  int a[5] = {1,2,3,4,5};
  int num = 42, *p = &num;
  a = p;
  return 0;
}
