#include <string>
#include <iostream>
using namespace std;

void print(const string &s){
  cout << s << endl;
}

int main(){
  string s("some thing");
  for(decltype(s.size()) index = 0;
	  index!=s.size() && !isspace(s[index]);
	  index++)
	s[index] = toupper(s[index]);

  cout << s << endl;

  return 0;
} 
