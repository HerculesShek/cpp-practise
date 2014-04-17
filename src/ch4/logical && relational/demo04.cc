#include <iostream>

using namespace std;

int k(){
  cout << "kkkkkkkkkk" << endl;
  return 5;
}


int h(){
  cout << "hhhhhhhhhh" << endl;
  return 5;
}

int i(){
  cout << "iiiiiiiiiii" << endl;
  return 5;
}

int j(){
  cout << "jjjjjjjjjjj" << endl;
  return 5;
}

int main()
{
  int res = k() + h() + i() * (j() -k());
  cout << res << endl;

  return 0;
}
