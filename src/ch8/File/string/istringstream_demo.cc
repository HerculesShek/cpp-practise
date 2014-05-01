#include <sstream>
#include <string>
#include <vector>
using std::vector;
#include <fstream>
using std::ifstream;
using std::string;
using std::istringstream;

#include <iostream>
using std::cout;
using std::endl;

struct PersonInfo{
  string name;
  vector<string> phones;
};

int main()
{
  string line, word;
  vector<PersonInfo> people;
  ifstream in("./cells");
  while(getline(in, line)){
	PersonInfo per;
	istringstream si(line);
	si >> per.name;
	while(si >> word)
	  per.phones.push_back(word);
	people.push_back(per);
  }
  for(auto p : people){
	cout << p.name << " : ";
	for(auto s : p.phones)
	  cout << s << " ";
	cout << endl;
  }
  return 0;
}
