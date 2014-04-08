#include <iostream>

using namespace std;

int main()
{
  int a = 4, *pa = &a;
  if(pa!=4)
	cout << "pointer can be compared with int" << endl;


  return 0;
}
