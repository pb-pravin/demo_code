// ratio_multiply example
#include <iostream>
#include <ratio>

int main ()
{
  typedef std::ratio<1,2> one_half;
  typedef std::ratio<1,3> one_third;

  typedef std::ratio_multiply<one_half,one_third> result;

  std::cout << "result = " << result::num << "/" << result::den;
  std::cout << " (which is: " << ( double(result::num) / result::den ) << ")" << std::endl;

  return 0;
}

/*
Output:
result = 1/6 (which is: 0.166667)
*/
