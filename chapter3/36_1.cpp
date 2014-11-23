#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;

using std::vector;

int main()
{
  vector<int> one = {23};
  vector<int> two = {23};

   if(one.size() != two.size())
    {
      cout << " vector one is not equal to vector two"<<endl;
    }else
        {
           bool isEqual = true;
           int index = 0;
           for(;index < one.size(); index++)
           {
               if( one[index] != two[index] )
                {
                 cout << " vector one is not equal to vector two"<<endl;
                  isEqual = false;
                  break; 
                }
           }

           if(isEqual)
           {
             cout<< "vector one is equal to vector two " << endl;
           }

         }
  

return 0;
}