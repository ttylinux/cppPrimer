#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int localValble(int value )
{
  static int size = value;

  return ++size;

}

int main()
{
   int value;
   cout <<" Input:"<<endl;
   cin >> value;
   
   cout << "result : "<< endl;
   for(int i = 0; i < value; i++)
   {
        cout <<localValble(value)<<endl; 

    }

    return 0;
}