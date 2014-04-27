#ifndef WINDOWS_MGR_H
#define WINDOWS_MGR_H
#include <vector>

class Windows_mgr{
public:
  using ScreenIndex = std::vector<string>::size_type;
  void clear(ScreenIndex);
private:
  std::vector<Screen> screens{Screen(24, 80, ' ')};
  
};

#endif
