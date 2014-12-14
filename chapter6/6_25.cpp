#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(int argc, char * *argv )
{
  if(argc != 3 ){

    cout <<"Error one using this command."<<endl;
  }else{
  
     cout<<"input option:"<<endl;
     string one = argv[1];
     string two = argv[2];
     cout<<one+","+two<<endl;

   }
 
 
return 0;
}