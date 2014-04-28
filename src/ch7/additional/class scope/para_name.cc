#include <iostream>
using namespace std;

int height = 1;
class Account{
public:
  void a(int height = 2);
private:
  int height = 100;
};

void Account::a(int height)
{
  cout << "height is " << Account::height << endl;
}

int main()
{
  Account acc;
  acc.a();
  return 0;
}
