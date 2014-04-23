#ifndef FAC_H
#define FAC_H
#include <string>
using std::string;
typedef string::size_type sz;
string screen(sz, sz, char = ' ');
string screen(sz, sz = 45, char);
string screen(sz = 80, sz, char);
#endif
