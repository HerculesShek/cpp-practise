#include <set>
#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main()
{
  map<string, size_t> word_count;
  string word;

  while (cin >> word) {
	auto ret = word_count.insert({word, 1});
	if (!ret.second) 
	  ++ret.first->second; 
  }

  for(const auto &a : word_count)
	cout << a.first << " " << a.second << endl;

  return 0;
}
