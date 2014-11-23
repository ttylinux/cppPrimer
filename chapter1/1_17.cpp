#include<iostream>

int main()
{

   int curVal = 0;
   int val = 0;
   int cnt = 0;

   if(std::cin>>curVal)
   {
        cnt = 1;

       while(std::cin>>val)
       {
          if(curVal == val)
           {
               cnt++;
            }else{
                    std::cout<< curVal << "occurs " << cnt<< "times.";
                    std::cout<<std::endl;
                  
                    curVal = val;
                    cnt = 1;

                 
                  }

       }
       
       std::cout<<curVal <<"occurs  "<<cnt<<"times.";
       std::cout<<std::endl; 


    }

   return 0;


}