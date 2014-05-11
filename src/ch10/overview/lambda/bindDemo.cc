#include <string>
#include <iostream>
#include <functional>

using namespace std;

bool check_size(const string &s, string::size_type sz)
{
  return s.size() >= sz;
}

auto check6 = bind(check_size, _1, 6);
