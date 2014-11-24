#include<iostream>

using std::cout;
using std::endl;
int main()
{
const size_t rowCnt = 3,colCnt = 4;

  int ia[rowCnt][colCnt] = {};

  int index = 0;
  for( auto &array : ia) 
   {
     for( auto &value : array)
       {
         value = index;
         index++;
       }
     
   }
 

//method one
cout << "method one " << endl;
for(int (*p) : ia)
{
 for(int j =0 ; j < colCnt; j++)
  {
    cout <<p[j]<<"  ";
  }
 cout << endl;

}

 
   

// method two 
cout << "method two " << endl;
for( int i = 0; i < rowCnt; i++)
{
    for( int j = 0; j < colCnt; j++)
	   {
	   cout << ia[i][j]<<" ";
	   }
	   cout << endl;
}


//method three
cout << "method three" << endl;
int (*p)[colCnt] = ia;
for(;p!=(ia+rowCnt);p++)
{
   for(int j =0; j < colCnt; j++)
   {
    cout <<p[0][j]<<" ";
   }
   cout << endl;

}

  

return 0;
}