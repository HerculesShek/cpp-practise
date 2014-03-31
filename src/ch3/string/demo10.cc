#include <string>
#include <iostream>
using namespace std;

void print(const string &s){
  cout << s << endl;
}

int main(){
  string s = "some thing";
  for(char c : s)
	c = 'X';
  cout << s << endl;
  return 0;
} 
