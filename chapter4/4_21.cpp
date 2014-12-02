#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{

  vector<int> one;
  int value;

   while(cin >> value)
   {
     one.push_back(value);
   }

  for( auto &i : one)
   {
     i = (i%2 == 0) ? i:(i*i);   
   }

  for(auto j : one)
   {
     cout << j << endl;
   }
   
return 0;
}