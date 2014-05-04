#include <forward_list>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
  vector<const char*> articles = {"a", "an", "the"};
  // ok: converts const char* elements to string
  forward_list<string> words(articles.begin(), articles.end());
  
  cout << *words.begin() << endl;


  return 0;
} 
