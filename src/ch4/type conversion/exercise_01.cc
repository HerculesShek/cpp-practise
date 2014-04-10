#include <iostream>

using namespace std;

int main()
{
  bool flag;   char cval;
  short sval;  unsigned short usval;
  int ival;    unsigned int uival;
  long lval;   unsigned long ulval;
  float fval;  double dval;

  long double ld = 3.14159L + 'a'; // 'a'--int--long double
  double d_res = dval + ival; // ival--double
  double d_res2 = dval + fval; // fval--double
  ival = dval; //dval--int
  flag = dval; //dval-- true/false
  float f_res = cval + fval; // cval--int--float
  int i_res = sval + cval; // sval--int  cval--int
  long l_res = cval + lval; // cval--long 注意，这里直接把char转为了long类型的
  unsigned long ul_res = ival + ulval; // ival--unsigned long; 
  usval + ival; // depends on the size of unsigned short and int
  uival + lval; // depends on the size of unsigned int and long 
  
  return 0;
}

