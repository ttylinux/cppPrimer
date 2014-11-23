#include<iostream>
#include<vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main()
{
  vector<int> intVector;
  int value;
  
  while( cin >> value )
   {
      intVector.push_back(value);  
    } 

  for(int i = 0; i < intVector.size(); i++)
   {
     cout << intVector[i] << endl;
   }


return 0;
}