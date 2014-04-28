#ifndef WINDOWS_MGR_H
#define WINDOWS_MGR_H
#include <vector>
#include "Screen.h"

class Window_mgr{
public:
  using ScreenIndex = std::vector<Screen>::size_type;
  void clear(ScreenIndex);
private:
  std::vector<Screen> screens{Screen(24, 80, ' ')};
};

#endif
