#include <set>
#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <string>
using namespace std;

int main()
{
  multimap<string, string> authors;
  authors.insert({"Barth, John", "Sot-Weed Factor"});
  authors.insert({"Barth, John", "Lost in the Funhouse"});
  authors.insert({"Alain de Botton", "A1"});  
  authors.insert({"Alain de Botton", "A2"});  
  authors.insert({"Alain de Botton", "A3"});

  string search_item("Alain de Botton"); // author we’ll look for


  for (auto pos = authors.equal_range(search_item);
	   pos.first != pos.second; ++pos.first)
	cout << pos.first->second << endl; // print each title
  return 0;
}
