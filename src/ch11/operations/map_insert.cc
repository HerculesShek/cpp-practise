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
  string word = "hercules";
  word_count.insert({word, 1});
  word_count.insert(make_pair(word, 1));
  word_count.insert(pair<string, size_t>(word, 1));
  word_count.insert(map<string, size_t>::value_type(word, 1));

  for(const auto &a : word_count)
	cout << a.first << " " << a.second << endl;

  return 0;
}
