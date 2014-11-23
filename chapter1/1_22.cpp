#include<iostream>
#include "Sales_item.h"

int main()
{
   
  Sales_item val;
  Sales_item cur;
  int cnt;

   if(std::cin>>val)
   {
       cnt = 1;
       while(std::cin>>cur)
         {
               if(val.isbn() == cur.isbn())
                {
                  cnt++;
                }else
                    {
                      std::cout<<"the";
                      std::cout<<val;
                      std::cout<<"  has ";
                      std::cout<<cnt;
                      std::cout<<std::endl;

                      val = cur;
                      cnt=1;
                     }
          }
     
     std::cout<<"the  ";
     std::cout<<val;
     std::cout<<" has ";
     std::cout<<cnt;
     std::cout<<std::endl;

    }
  



  return 0;
}