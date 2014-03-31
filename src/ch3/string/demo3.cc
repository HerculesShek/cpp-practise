#include <string>
#include <iostream>
using namespace std;

void print(const string &s){
  cout << s << endl;
}

int main(){
  string word;
  while(cin>>word)
	cout << word << endl;
  return 0;
} 
