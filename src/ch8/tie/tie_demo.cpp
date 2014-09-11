#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ostream *prevstr;
    ofstream ofs;
    ofs.open("test.txt");

    cout << "tie example\n";

    *cin.tie() << "This is inserted into cout\n";
    prevstr = cin.tie(&ofs);
    *prevstr << "cout again\n";
    *cin.tie() << "This is inserted into the file\n";
    cin.tie(prevstr);

    ofs.close();
    return 0;
}