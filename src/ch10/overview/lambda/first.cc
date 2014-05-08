#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

string make_plural(int cnt, const string &s, const string &x)
{
  return ((cnt > 1) ? (s+x) : s);
}

void elimDups(vector<string> &words)
{
  sort(words.begin(), words.end());
  auto end_unique = unique(words.begin(), words.end());
  words.erase(end_unique, words.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
  elimDups(words);

  stable_sort(words.begin(), words.end(), 
			  [](const string &a, const string &b)
			  { return a.size() < b.size(); });

  auto index = find_if(words.begin(), words.end(), 
					   [sz](const string &s)
					   { return s.size() >= sz; });

  auto count = words.end() - index;
  cout << count << " " << make_plural(count, "word", "s")
	   << " of length " << sz << " or longer" << endl;

  for_each(index, words.end(), [](const string &s)
		   { cout << s << endl;});
}

int main(int argc, char const *argv[])
{
  vector<string> w{"the", "quick","red","fox","jumps","over", "the", "slow", "red", "turtle"};
  biggies(w, 4);

  return 0;
}
