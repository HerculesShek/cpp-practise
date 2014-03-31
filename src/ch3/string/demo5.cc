#include <string>
#include <iostream>
using namespace std;

void print(const string &s){
  cout << s << endl;
}

int main(){
  string h("hello world!!!");
  decltype(h.size()) pun_cnt = 0;
  for(auto c : h)
	if(ispunct(c))
	  pun_cnt++;
  cout << pun_cnt << " punctuations in " <<"\"" <<h<<"\"" << endl;
  return 0;
} 
