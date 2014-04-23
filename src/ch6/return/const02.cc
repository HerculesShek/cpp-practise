#include <iostream>
#include <string>
using namespace std;

const string &shorterString(const string &s1, const string &s2)
{
  return s1.size() < s2.size() ? s1 : s2;
}

string &shorterString(string &s1, string &s2)
{
  auto &s = shorterString(const_cast<const string&>(s1), const_cast<const string&>(s2));
  return const_cast<string&>(s);
}

int main()
{
  string s1("aa"), s2("bbb");
  shorterString(s1, s2)[0] = 'q';
  cout << s1 << "  " << s2 << endl;
  return 0;
} 
