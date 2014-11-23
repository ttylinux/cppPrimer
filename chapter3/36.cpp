#include<iostream>
#include<vector>
#include<iterator>

using std::cout;
using std::cin;
using std::endl;

using std::begin;
using std::end;

using std::vector;

int main()
{
 const size_t size = 10;
 int arrayOne[size] = {23,34};
 int arrayTwo[size] = {23,34};
  
 
 int oneLength = 0;
 int otherLength = 0;

 int *oneBeg = begin(arrayOne);
 int *twoBeg = begin(arrayTwo);
 int *oneEnd = end(arrayOne);
 int *twoEnd = end(arrayTwo);

 for(;oneBeg != oneEnd; oneBeg++)
 {
    oneLength ++;
 }

 for(;twoBeg != twoEnd; twoBeg++)
 {
    otherLength ++;
 }

if( oneLength != otherLength && oneLength != 0 && otherLength!=0)
 {
   cout << "arrayOne is not equal to arrayTwo " << endl;
   cout<< "oneLength:"+oneLength<<endl;
   cout << "otherLength:"+otherLength<<endl;
  }else
      {
	   bool isEqual = true;
       int index =0;
	   for(;index < size; index++)
	    {
		  if(arrayOne[index] != arrayTwo[index] )
		   {
		   isEqual = false;
		   cout << "arrayOne is not equal to arrayTwo"<<endl;
		    break;
		   }
		}
		
		if(isEqual)
		{
		cout << "arrayOne is equal to arrayTwo " <<endl;
		}

      }

return 0;
}
