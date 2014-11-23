#include<iostream>
#include<cstddef>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  
  const size_t size = 10;
  int array[size] = {0};
  
   for( size_t i = 0; i < size; i++)
   {
      array[i] = i;
   }

   cout << "result"<<endl;
   for( int value : array)
   {
     cout <<value<<endl;
    }

return 0;
}