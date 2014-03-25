#include <iostream>
using namespace std;

int main()
{
  constexpr int *a = nullptr;
  constexpr int *b = 0;

  const int sum = 100;
  const int *c = &sum;

  return 0;
}
