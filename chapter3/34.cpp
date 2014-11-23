#include<iostream>
#include<iterator>

using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;

int main()
{
 const size_t size = 10;
 int array[size] = {};

  int value = 0, i = 0;
  while( cin >> value && i< 10 )
  {
      array[i] = value;
      i++;
  }

  cout << "input:"<<endl;  
  for( int one : array )
  {
     cout << one << endl;
   }


 int *p =begin(array);
 int *e = end(array);
 for(;p != e; p++)
 {
   (*p) = 0;
 }

 cout << "new:"<<endl;
 for( int one : array)
 {
    cout << one << endl;
  }

return 0;
}