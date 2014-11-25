#include<iostream>


using std::cout;
using std::cin;
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
   
   cout << " use using  to define a type " << endl;
   using array = int * ;
   for(array p : ia)
   {
      for( int *q = p; q != p+colCnt; q++)
	    {
		cout << (*q) << " ";
		}
		cout << endl;
   }
  
return 0;
}