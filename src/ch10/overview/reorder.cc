#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>
using namespace std;

bool isShorter(const string &s1, const string &s2)
{
  return s1.size() < s2.size();
}

int main(int argc, char const *argv[])
{
  vector<string> w{"the", "quick","red","fox","jumps", "over", "the", "slow", "red", "turtle"};
  stable_sort(w.begin(), w.end(), isShorter);
  for(string s:w)
	cout << s << " ";
  cout << endl;
  
  auto end_unique = unique(w.begin(), w.end());
  w.erase(end_unique, w.end());
 
  for(string s:w)
	cout << s << " ";
  cout << endl;

  return 0;
}
