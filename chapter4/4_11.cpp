#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
 char a = 'a';
 char b = 'b';
 char c = 'c';
 char d = 'd';

 if ( a > b )
  {
    cout << a << " " << b << endl;
  }else 
      {
           cout << b << " " << a << endl;
      }

 if ( c > d)
  {
    cout << c << "  "  << d << endl;
  }else
       {
         cout << d << "  "  << c << endl;
       }

return 0;
}