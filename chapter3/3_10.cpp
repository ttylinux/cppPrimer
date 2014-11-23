#include<iostream>
#include<string>
#include<cctype>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
  string input;
  string result;

   cin >> input;

   for(auto c : input)
   {
     if(!ispunct(c))
     result = result + c;
   }

   cout << result << endl;
 

return 0;
}