#include<iostream>

int main()
{
   int i = 10;
   int b = 30;
   int *p = &i;
   

   std::cout<< *p << std::endl;
    p = &b;
   std::cout<< *p << std::endl;
   *p = 100;
   std::cout << b << std::endl;


 return 0;
}