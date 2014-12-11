#include"Chapter6.h"
#include<iostream>

using std::cout;
using std::endl;

int fact( int value)
{
  int result = 1;
  while ( value > 1 )
  {
     result *=(value--);
	 
  }
  return result;
}