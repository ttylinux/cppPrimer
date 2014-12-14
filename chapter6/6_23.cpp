#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void print(int *begin, size_t length)
{
   for(int i = 0; i < length; i++)
   {

     cout <<*begin++<<endl;
   }

}

int main()
{
 int i =0, j[2]={0,1};
 
 print(&i,1);
 print(j,2);


return 0;
}