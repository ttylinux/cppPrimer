#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;

using std::vector;

int main()
{
  vector<int> scores(11,0);
  vector<int> grades;
  int value;

   while( cin >> value)
  {
     grades.push_back(value);

   }

   for( auto it = grades.cbegin(); it != grades.cend(); it++)
   {
         if( (*it) <= 100 )
         {
             ++scores[(*it)/10];
          }
     
    }
   
 
   cout << "result : " << endl;
   for( int result : scores )
   {
    cout << result << endl;
   }

return 0;
}