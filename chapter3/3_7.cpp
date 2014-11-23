#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
  string str;

   cin >> str;

   for(char &c : str)
   {
        c = 'X';
    }

    cout << str;



return 0;
}