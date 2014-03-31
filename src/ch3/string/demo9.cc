#include <string>
#include <iostream>
using namespace std;

void print(const string &s){
  cout << s << endl;
}

int main(){
  string hex = "123456789ABCDEF";
  cout << "enter a seriour number less than 16:"<<endl;
  string result;
  string::size_type n;
  while(cin >> n)
	if(n<hex.size())
	  result+=hex[n];
  cout << result << endl;
  return 0;
} 
