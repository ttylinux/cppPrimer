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

   
   int index = 0;
   int len = str.size();
   while( !str.empty() && len > 0)
   {
     str[index] = 'X';
     index++;
     len--;
   }  
  cout<<"new str:"<<str << endl;

return 0;
}