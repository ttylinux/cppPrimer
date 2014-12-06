#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
 int vowelCnt = 0;
 char value;

  while( cin >> value )
  {
       if ( value == 'a' || value == 'e' || value =='i'|| value == 'o' || value == 'u')
        {
          ++vowelCnt;
        } 
  }

 cout << " number of vowe:" << vowelCnt << endl;

return 0;
}