#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::endl;
using std::endl;

using std::vector;
using std::string;

int main()
{
 vector<int> one = {0,1,1,2};
 vector<int> two = {0,1,1,2,3,5,8};

 decltype(one.size()) sizeOne = one.size();
 decltype(two.size()) sizeTwo = two.size();
 decltype(two.size()) sLength;
 if( sizeOne > sizeTwo)
  {
   sLength = sizeTwo;
  }else
      {
       sLength = sizeOne;
      }

  bool isPrefix = true;
  for(int i =0 ; i < sLength; i++)
  {
     if(one[i] != two[i])
       {
         isPrefix = false;
        }
  }

  if(isPrefix)
  {
  cout << "They have prefix relationship."<<endl;
  }else
       {
       cout <<"They do not have prefix relationship"<<endl;
       }

return 0;
}