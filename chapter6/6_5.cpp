#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void displayAbsoluteValue(int value)
{
   if ( value < 0 ){

    cout << (-value) << endl;

   }else {

     cout << value << endl;
   }
       
}

int main()
{
  int value;
  cout << " Input:" << endl;
  cin >> value;

   displayAbsoluteValue(value);

  return 0;
}