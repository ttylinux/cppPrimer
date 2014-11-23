#include<iostream>
#include<string>
#include<vector>
#include<cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
 vector<string> strs;
 string value;

  while(cin >> value )
  {
     strs.push_back(value);
   }

  
  for(auto &temp : strs)
  {
    for( auto &c : temp )
      {
        c = toupper(c);
      } 
    
  }  

  for( string result : strs)
  {
    cout << result << endl;
  }
  
return 0;
}