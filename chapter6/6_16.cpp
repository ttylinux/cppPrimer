#include<iostream>
#include<cctype>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool hasUpperCase(const string &s)
{
    for(auto c : s)
    {
      if(isupper(c))
       return true;
     }
     return false;
}
void changeTolower(string &s)
{
   for(auto &c : s ) 
  {
     c = tolower(c);
  }
}  
int main()
{
  string one;
  string two;
 
  cout<<"Input the first string:"<<endl;
  cin>>one;

  cout<<"Input the second string:"<<endl;
  cin>>two;

  if(hasUpperCase(one)){
   cout<<one<< "  " << "has upper "<<endl;
  }else{
  cout <<one <<"  " <<" does not have upper"<<endl;
  }

 changeTolower(two);
 cout<<"The changed second string:"<<two<<endl;

}
