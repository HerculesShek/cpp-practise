#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  string line("FIRST,MIDDLE,LAST");
  auto comma = find(line.cbegin(), line.cend(), ',');
  cout << string(line.cbegin(), comma) << endl;

  auto rcomma = find(line.crbegin(), line.crend(), ',');
  cout << string(rcomma.base(), line.cend()) << endl;

  return 0;
} 
