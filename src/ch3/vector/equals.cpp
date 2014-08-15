#include <iostream> 
#include <vector>   
using namespace std;    

int main () {
  vector<int> a{1,2,3,4}, b{1,2,3,4};
  if (a==b) {
      cout << "a equals b" << endl;
  }
  
  a = {1,2,5};
  if (a > b) {
      cout << "a is gt b" << endl;
  }
  return 0;
}
