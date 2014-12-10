#include<iostream>

using std::cout;
using std::cin;
using std::endl;


int inCrease()
{
  static int one = 0;
  return one++;
}

int main()
{
   int value;
   cout<<"please input the increase time: " << endl;
   cin >> value;

   for(int i = 0; i < value; i++)
    {

        cout <<inCrease()<<endl;
    }

 return 0;
}