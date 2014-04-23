#include <iostream>
#include <string>
using namespace std;

float add(int i)
{
  return i+8;
}

double add(float f)
{
  return f+55;
}

double add(double d)
{
  return d+5;
}


int main()
{
  cout << add(6) << endl;
  return 0;
} 
