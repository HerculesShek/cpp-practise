#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector<string> sv = {"aa", "bb", "", "rtw"};
  vector<string>::iterator iter = sv.begin();
  auto a =  iter++->empty();
  
 cout <<a << endl;
  


  return 0;
}
