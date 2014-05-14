#include <map>
#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main()
{
  map<string, size_t> word_count;
  set<string> exclude = {"The", "But", "And", "Or", "An", "A",
						 "the", "but", "and", "or", "an", "a"};


  // three elements; authors maps last name to first
  map<string, string> authors = { {"Joyce", "James"},
								  {"Austen", "Jane"},
								  {"Dickens", "Charles"} };

  vector<int> ivec;
  for (vector<int>::size_type i = 0; i != 10; ++i) {
	ivec.push_back(i);
	ivec.push_back(i); // duplicate copies of each number
  }

  set<int> iset(ivec.cbegin(), ivec.cend());
  multiset<int> miset(ivec.cbegin(), ivec.cend());
  cout << ivec.size() << endl; // prints 20
  cout << iset.size() << endl; // prints 10
  cout << miset.size() << endl; // prints 20
  return 0;
}
