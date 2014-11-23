#include<iostream>
#include<string>
#include<cstring>

using std::cout;
using std::cin;
using std::endl;

using std::string;

int main()
{
  string one = "I have one dream.";
  string two = "I have two dream.";

  if( one == two )
   {
     cout << "one is equal two " <<endl;
    }else if ( one > two)
          {
           cout << " one is larger than two " << endl;
          }else
              {
               cout << " two is larger than one " << endl;
              }

 const char strOne[] = {'a','b','c','\0'};
 const char strTwo[] = {'a','b','c','\0'};

 int result = strcmp(strOne,strTwo);
  if ( 0 == result )
      {
         cout << "strOne is equal to strTwo" << endl; 
       }else if ( result > 0)
            {
              cout << "strOne is larger than strTwo" <<endl;
             }else 
                  {
                  cout <<"strTwo is larger than strOne"<<endl;
                  }


return 0;
}