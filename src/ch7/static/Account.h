#ifndef ACCOUNT_H
#define ACCOUNT_h
#include <string>
using std::string;

class Account{
public:
  void calculate(){amount += amount * interestRate; }
  static double rate() {return interestRate; }
  static void rate(double);
private:
  string owner;
  double amount;
  static double interestRate;
  static double initRate();
  static constexpr int period = 30;
  double daily_tbl[period];
};

#endif 
