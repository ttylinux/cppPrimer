#include<iostream>
#include "Sales_item.h"

int main()
{
  Sales_item one;
  Sales_item two;

   std::cin>>one>>two;

   if(one == two)
   {
    std::cout<<"The " <<one<< ",result:"<<one+two<<std::endl;
    }else
        {
         std::cout<<"There are not the same,";
         std::cout<<"one is : "<<one;
         std::cout<<"two is : "<<two;
         std::cout<<std::endl;
        }

return 0;


}