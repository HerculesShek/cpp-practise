#include <string>
#include <fstream>
#include <map>
#include <sstream>
#include <iostream>
using namespace std;

map<string, string> buildMap(ifstream &map_file)
{
  map<string, string> trans_map;
  string key, value;
  while (map_file >> key && getline(map_file, value))
	if(value.size() > 1)
	  trans_map[key] = value.substr(1);
	else
	  throw runtime_error("no rule for " + key);
  return trans_map;
}

const string &
transform(const string &word, const map<string, string> &m)
{
  auto res = m.find(word);
  if(res != m.cend())
	return res->second;
  else 
	return word;
}

void word_transform(ifstream &map_file, ifstream &input)
{
  auto trans_map = buildMap(map_file); // store the transformations
  string text; // hold each line from the input
  while (getline(input, text)) { // read a line of input
	istringstream stream(text); // read each word
	string word;
	bool firstword = true; // controls whether a space is printed
	while (stream >> word) {
	  if (firstword)
		firstword = false;
	  else
		cout << " "; // print a space between words
	  // transform returns its first argument or its transformation
	  cout << transform(word, trans_map); // print the output
	}
	cout << endl; // done with this line of input
  }
}

int main(int argc, const char *argv[])
{
  ifstream map_file(argv[1]);
  ifstream input(argv[2]);
  word_transform(map_file, input);
  
  return 0;
}
