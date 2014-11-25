#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
 const int colCnt = 4;
 const int rowCnt = 3;
 
 int ia[rowCnt][colCnt] = {};
 
 int index = 0;
 for(auto &row : ia)
 {
   for(auto &col : row)
    {
       col = (index++);
    }

 }
 
 //use auto to output result
 for( auto &row : ia)
 {

   for(auto col : row)
    {
        cout << col << " ";
    }
    cout << endl;
}

return 0;
}