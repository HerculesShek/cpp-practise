#include "strblob.h"

using namespace std;

int main(){
  StrBlob b, a=b;
  b.push_back("aaaa");
  string name = a.front();
  
  return 0;
}
