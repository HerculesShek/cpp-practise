#include <fstream>
using std::ofstream;
using std::fstream;



int main()
{
  fstream out("./a", fstream::in);
  if(out)
	out.close();

  return 0;
} 
