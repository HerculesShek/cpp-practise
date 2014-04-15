#include <iostream>
#include <string>

using namespace std;

constexpr double pi = 3.14159;

int user_cnt = 100;

int main()
{
  constexpr double *dead = nullptr;
  if(!dead)
	cout << "dead is nullptr" << endl;

  const constexpr double *p1 = &pi;
  // p1 = nullptr;
  constexpr int *p2 = &user_cnt;
  
  *p2 = *p2-1;

  cout << user_cnt << endl;

  return 0;
}
