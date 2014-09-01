#include <string>
#include <iostream>
using namespace std;

int main(){
  
  string str = "aaa";

  string line;
  cin >> line;
  cout << line << endl;

  getline(cin, line);
  cout << line << endl;

  while(cin >> line){
      cout << line << endl;
  }
  return 0;
}
