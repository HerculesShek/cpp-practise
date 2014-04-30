#include <iostream>

using namespace std;

int main()
{
  int a;
  cout << "cin eof is " << cin.eof() << endl;
  cout << "cin fail is " << cin.fail() << endl;
  cout << "cin bad is " << cin.bad() << endl;
  cout << "cin good is " << cin.good() << endl;
  cin >> a;
  cout << "cin eof is " << cin.eof() << endl;
  cout << "cin fail is " << cin.fail() << endl;
  cout << "cin bad is " << cin.bad() << endl;
  cout << "cin good is " << cin.good() << endl;

  return 0;
} 
