#include<iostream>
using std::cout;

int main()
{
  int sum = 0;
  int val = 50;

   while(val<=100)
   {
     sum += val;
      ++val;

    }
    cout<<"The result : ";
    cout<< sum;
    cout << std::endl;
     
    return 0;

}