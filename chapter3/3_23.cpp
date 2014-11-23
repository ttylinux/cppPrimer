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

   for(auto &c : str)
    {
        c = 'X';
    }

   cout << "new str: " << str << endl;




return 0;
}

