#include<iostream>

using std::cout;
using std::cin;
using std::endl;


int fct(int one)
{
  int result = 1;

   while( one > 1 ){

      result *=(one--);
   }

  return result;

}


int main()
{
   int value;
   cout << " Input: " << endl;
   cin >> value;

   cout << "result: " << fct(value) << endl;

}

