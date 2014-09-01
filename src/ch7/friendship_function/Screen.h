#ifndef _SCREEN_H
#define _SCREEN_H
#include <string>
#include <iostream>
#include "Window_mgr.h"

class Screen{
    friend void Window_mgr::clear(ScreenIndex);
public:
    typedef std::string::size_type pos;
    // constructors
    Screen() = default;
    Screen(pos ht, pos wd, char c):height(ht), width(wd),
                                   contents(ht*wd, c){}
    // set
    Screen &set(char);
    Screen &set(pos, pos, char);
    //get
    char get() const{return contents[cursor];}
    inline char get(pos r, pos c) const;
    //move
    Screen &move(pos r, pos c);
    // overload display
    Screen &display(std::ostream &os);
    const Screen &display(std::ostream &os) const;

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    void do_display(std::ostream &os) const {
        os << contents << std::endl;
    }
};

#endif // _SCREEN_H