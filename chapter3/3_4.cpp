#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
  string one,two;

   cout << "input two compare string : " << endl;

   cin >> one >> two;

   if(one == two )
    {
       cout << "They are equal." << endl;
     }else if ( one > two)
            {
              cout << one << " is greater than "<< two << endl;
            }else 
                {
                cout << two << " is greater than "<< one << endl;
                }

return 0;
}