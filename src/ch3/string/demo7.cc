#include <string>
#include <iostream>
using namespace std;

void print(const string &s){
  cout << s << endl;
}

int main(){
  string s("some thing");
  if(!s.empty())
	s[0] = toupper(s[0]);
  print(s);
  return 0;
} 
