#include <sstream>
#include <string>
#include <vector>
using std::vector;
#include <fstream>
using std::ifstream; using std::ofstream; using std::fstream;
using std::string;
using std::istringstream;
using std::ostringstream;

#include <iostream>
using std::cout;
using std::endl;
using std::cerr;

struct PersonInfo{
  string name;
  vector<string> phones;
};

bool valid(const string &s){
  if(s[0] == '0')
	return false;
  return true;
}

string format(const string &s)
{
  return string(s);
}

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
  
  ofstream os("valid", fstream::app);
  for(const auto &sp : people){
	ostringstream formatted, badNums;
	for(const auto &s : sp.phones){
	  if(!valid(s)){
		badNums << " " << s; 
	  } else 
		formatted << " " << format(s);
	}
	if(badNums.str().empty())
	  os << sp.name << " " 
		 << formatted.str() << endl;
	else 
	  cerr << "input error: " << sp.name
		   << " invaild number(s) " << badNums.str() << endl;
  }
  return 0;
}
