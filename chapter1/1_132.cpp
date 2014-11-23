#include<iostream>

int main()
{
   int a;
   int b;

    std::cout << "Enter two integer:"<<std::endl;
    std::cin>>a>>b;

    if(a == b)
     {
         std::cout<<"The two integer must not the same"<<std::endl;
      }else if ( a > b)
         {
              for( b; b <= a; b++)
              {
               std::cout<<b<<std::endl;
               }
         }else
             {
                  for(a; a <= b; a++)
                    {
                     std::cout<<a<<std::endl;

                     }
             }

            return 0;

}