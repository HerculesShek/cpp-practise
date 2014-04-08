#include <iostream>
#include <string>
#include <ostringstream>

using namespace std;

int main()
{
  
  string s = "word", b;
  int a = 88;
  ostringstream ss;
  ss << a;
  ss >> b;
  cout << s + b << endl;
  
  return 0;
} 
