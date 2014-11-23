#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::endl;

using std::vector;

int main()
{
  vector<int> array;
  int value;

  while( cin >> value )
  {
     array.push_back(value);
  }

  cout << "sum, between two nearby value" << endl;
  if(array.size() == 1)
   {
      cout << array[0] << endl;
    }else if (array.size() > 1 )
         {
             for(int i = 0; i < array.size() - 1; i++)
              {
                cout << array[i] + array[i+1] << endl;
              }
         }


  cout << "sum,head and tailor value"<< endl;
  if(array.size() == 1)
   {
       cout << array[0] << endl;
   }else if ( array.size() > 1 )
         {
              int middle = array.size() % 2;
              if( 0 == middle )
              {
                 int size = array.size()/2;
                 for(int i = 0; i < size; i++)
                 {
                   cout << array[i]+array[array.size()-1-i] << endl;
                  }
              }else
                   {
                     int another = array.size()/2;
                     for(int i = 0 ; i < another; i++)
                      {
                       cout << array[i]+array[array.size()-1-i]<<endl;
                       }
                      cout << array[another] << endl;

                   }

          }

return 0;

}