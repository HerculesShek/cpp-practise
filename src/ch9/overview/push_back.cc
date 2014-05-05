#include <list>
#include <deque>
#include <forward_list>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

void print(const list<double> &l)
{
  for(auto a : l)
	cout << a << "  ";
  cout << endl;
}

void print(const deque<int> &l)
{
  for(auto a : l)
	cout << a << "  ";
  cout << endl;
}

void print(const vector<string> &l)
{
  for(auto a : l)
	cout << a << "  ";
  cout << endl;
}

void print(const string &s)
{
  cout << s << endl;
}

void print(const forward_list<long> &l)
{
  for(auto a : l)
	cout << a << "  ";
  cout << endl;
}

int main()
{
  list<double> a;
  deque<int> b;
  // forward_list<long> c;
  string s;
  vector<string> sv;
  
  a.push_back(66.33);
  b.push_back(44);
  // c.push_back(3333333);
  s.push_back('a');
  sv.push_back("jack");

  print(a);
  print(b);
  print(s);
  print(sv);

  return 0;
}
