#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
using std::ostream; using std::istream;
#include <string>
using std::string;

class Screen{
  friend class Window_mgr;
public:
  typedef string::size_type pos;
  Screen() = default;
  Screen(pos ht, pos wd, char c):
    height(ht), width(wd), contents(ht*wd, c){}
  char get() const 
  {return contents[cursor]; } // implicitly inline 
  inline char get(pos ht, pos wd) const; // explicitly inline
  Screen &move(pos r, pos c);
  
  Screen& set(char);
  Screen& set(pos, pos, char);

  Screen &display(ostream &o)
  {do_display(o); return *this; }
  const Screen &display(ostream &o) const
  {do_display(o); return *this; }
private:
  void do_display(ostream &o) const
  {o << contents; }
  pos cursor = 0;
  pos height, width = 0;
  string contents;
};
inline
Screen& Screen::set(char c)
{
  contents[cursor] = c;
  return *this;
}

inline
Screen& Screen::set(pos r, pos l, char c)
{
  contents[r*width + l] = c;
  return *this;
}

#endif
