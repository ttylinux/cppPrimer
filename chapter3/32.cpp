#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;

using std::vector;

int main()
{
  const size_t size = 10;
  int array[size] = {0};
  
   for( size_t i = 0; i < size; i++)
   {
      array[i] = i;
   }

  vector<int> one;
  for( int value : array)
  {
    one.push_back(value);
  }

  cout << "result in vector:"<<endl;
  for( int value : array)
  {
   cout << value << endl;
  }

return 0;
}