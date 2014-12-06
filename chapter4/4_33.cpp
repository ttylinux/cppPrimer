#include<iostream>


using std::cout;
using std::cin;
using std::endl;


int main()
{
 int x = 3;
 int y = 15;

 cout << ( (x > 15)? ++x,++y : --x, --y) << endl;  //output 14


return 0;
}