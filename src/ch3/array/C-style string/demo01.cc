#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  const char name[] = "jack";
  const char *nick = name;

  auto len = strlen(name);
  auto len2 = strlen(nick);
  const char* name2 = "bbc";
  cout << strcmp(nick, name2) << endl; //8
  cout << (strcat(name, name2)) << endl; // jackabc
  cout << name << endl; // jackabc
  cout << (sizeof(name) / (sizeof(*name))) << endl; // 5
  cout << strlen(name) << endl; // 7
  char name3[] = {'t','o','m','\0'};
  cout << strlen(name3) << endl; // 3

  return 0;
}
