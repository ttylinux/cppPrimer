#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::cin;

using std::string;

int main()
{
 string one;
 string two;
 string rsp;
 do{
    cout << " Please enter two string:";
    if(cin >> one >> two )
    {
          if(one.size() >= two.size())
            cout <<"The shorter one is : " << two<<endl;
    }else
         {
		  cout<<endl;
          cout << "Error!"<<endl;
          break;
         }

   cout <<"continue?, enter yes or no: " << endl;
   cin >> rsp;
 
 }while(!rsp.empty()&&rsp[0] != 'n'); 

return 0;
}
