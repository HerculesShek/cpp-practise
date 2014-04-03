#include <iostream>

int main()
{
  int sum = 0, val = 1;
  while(val<=100){
	sum += val;
	val++;
  }
  std::cout << "the sum of 1 to 10 inclusive is " << sum <<std::endl;


  int s = 0;
  for(int val=1;val<=100;++val){
	s+=val;
  }
  std::cout<<"s is "<<s<<std::endl;
  
  sum = 0;
  for (int i = -100; i <= 100; ++i)
	sum += i;
  std::cout<<"sum now is "<< sum <<std::endl;


  sum = 0;
  int value = 0;
  // read until end-of-file, calculating a running total of all values read
  while (std::cin >> value)
	sum += value; // equivalent to  sum = sum + value
  std::cout << "Sum is: " << sum << std::endl;


  return 0;
}
