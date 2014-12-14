#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int getLarger(int one, int * two)
{
   if ( one > (*two)){

    return one;
    }else {

    return (*two);
    }
}

int main()
{
  int one;
  int two;
  
  cin>>one>>two;
  cout<<"The larger one is:"<<getLarger(one,&two)<<endl;

return 0;
}