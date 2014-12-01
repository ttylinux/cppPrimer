#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int value;

   while( cin >> value && value != 42)
    {
      cout << value << endl;
    }


return 0;
}