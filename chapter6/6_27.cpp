#include<iostream>
#include<initializer_list>


using namespace std;

int sum(initializer_list<int> param)
{
   int sum=0;

  for( int one : param)
  {
     sum += one;
   }

  return sum;
}

int main()
{
  cout << "sum:"<<sum({1,2,34,5,6})<<endl;

return 0;
}
