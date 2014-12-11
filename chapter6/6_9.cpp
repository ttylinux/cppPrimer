#include<iostream>
#include"Chapter6.h"

using std::cout;
using std::cin;
using std::endl;
extern int fact(int value);


int main()
{
   int value;
   cout << "Input:"<<endl;
   cin >> value;
   
   int result = fact(value);
   cout << "Result:"<<result << endl;

return 0;
}