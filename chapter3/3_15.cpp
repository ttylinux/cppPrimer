#include<iostream>
#include<vector>
#include<string>


using std::vector;
using std::string;

using std::cout;
using std::cin;
using std::endl;

int main()
{
  vector<string> oneStrings;
  string value;

   while(cin >> value )
     {
       oneStrings.push_back(value);
     }

    for(int i = 0; i < oneStrings.size(); i++)
      {
         cout << oneStrings[i] << endl;
       }

  return 0;
}