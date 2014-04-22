#include <iostream>
using namespace std;

size_t count_calls()
{
  return ctr++;
  static size_t ctr = 0;

}

int main()
{
  for(int i=0; i != 10; ++i)
	cout << count_calls() << endl;

  return 0;
}
