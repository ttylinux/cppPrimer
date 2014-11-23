#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
   const char ca[] = {'h','e','l','l','o'};
   const char *cp = ca;
   
  int index = 0;
  while ( *cp && index < 5){

     cout << *cp << endl;
     ++cp;
     ++index;
  }
  

return 0;
}