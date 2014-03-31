#include <string>
#include <iostream>
using namespace std;

void print(const string &s){
  cout << s << endl;
}

int main(){
  string h("hello world!!!");
  for(auto &c : h)
	c = toupper(c);
  cout << h << endl;
  return 0;
} 
