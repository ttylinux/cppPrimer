#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
 string one = "";
 string prev="";
  
  int sCnt = 1;
  while( cin >> one )
  {
     if(prev == "")
      {
        prev = one;
      }else if ( prev == one)
              {
                 ++sCnt;
              }else
                 { 
                   cout <<"has " << sCnt << " "+prev << endl;
                   prev = one;
                   sCnt = 1;  
                 
                 }
     
  }

  cout << "has 1 " << one << endl;


return 0;
}