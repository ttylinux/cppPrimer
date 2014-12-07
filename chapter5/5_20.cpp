#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;

using std::string;

int main()
{
 int sCnt = 1;
 string prev="";
 string cur="";

 while( cin >> cur)
 {
      if( prev == "")
        {
          prev = cur;
        }else
             {
                if(cur == prev )
                 {
                    if((++sCnt) == 2)
                      {
                       cout <<"has " <<sCnt << " "+prev<<endl;
                       break;
                       }
                  }else
                       {
                          prev = cur;
                       }

              }
  
 }


return 0;
}