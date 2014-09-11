#include <string>
#include <iostream>

class Screen{
    friend class Window_mgr;
public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c):height(ht), width(wd),
                                   contents(ht*wd, c){}
    Screen &set(char);
    Screen &set(pos, pos, char);
    char get() const{return contents[cursor];}
    
    inline char get(pos r, pos c) const;
    Screen &move(pos r, pos c);
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