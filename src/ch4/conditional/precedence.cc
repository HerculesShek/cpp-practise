#include <iostream>

using namespace std;

int main()
{
  int grade = 78;

  cout << ((grade < 60) ? "fail" : "pass"); // prints pass or fail
  cout << (grade < 60) ? "fail" : "pass"; // prints 1 or 0!
  cout << grade < 60 ? "fail" : "pass"; // error: compares cout to 60
  return 0;
} 
