#include<iostream>


using std::cout;
using std::endl;
using std::cin;

int main()
{
  int v1,v2;
  do{
  
     cout <<"Please enter two numbers to sum:";
     if(cin >> v1 >> v2 )
       cout << "Sum is :"<<v1+v2<<endl;
  

 }while (cin);

return 0;
}