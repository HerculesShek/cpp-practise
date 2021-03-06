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
  auto entries = authors.count(search_item); // number of elements
  auto iter = authors.find(search_item); // first entry for this author
  // loop through the number of entries there are for this author
  while(entries) {
	cout << iter->second << endl; // print each title
	++iter; // advance to the next title
	--entries; // keep track of how many we’ve printed
  }

  return 0;
}
