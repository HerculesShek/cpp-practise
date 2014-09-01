#include <string>
#include <iostream>
using namespace std;

void print(const string &s){
  cout << s << endl;
}

int main(){
    string a("aaaa");
    cout << "ddddd, " + a << endl;

    
  string line;
  while(getline(cin, line))
	if(line.size()>20)
    	print(line);
  return 0;
}
