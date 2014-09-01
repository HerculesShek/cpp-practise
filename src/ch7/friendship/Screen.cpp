#include "Screen.h"
using namespace std;

inline Screen &Screen::move(pos r, pos c){
    pos row = r*width;
    cursor = row+c;
    return *this;
}

char Screen::get(pos r, pos c) const{
    pos row = r*width;
    return contents[row+c];
}

Screen &Screen::set(char c){
    contents[cursor] = c;
    return *this;
}

Screen &Screen::set(pos r, pos col, char c){
    contents[r*width+col] = c;
    return *this;
}

Screen &Screen::display(ostream &os){
    do_display(os);
    return *this;
}

const Screen &Screen::display(ostream &os) const{
    do_display(os);
    return *this;
}

