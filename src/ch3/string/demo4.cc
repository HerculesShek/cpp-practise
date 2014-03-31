#include <string>
#include <iostream>
using namespace std;

void print(const string &s){
  cout << s << endl;
}

int main(){
  string line;
  while(getline(cin, line))
	if(line.size()>20)
	  cout << line << endl;
  return 0;
} 
