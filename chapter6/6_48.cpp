#include<iostream>
#include<string>
#include<assert.h>


using std::cout;
using std::endl;
using std::cin;

using std::string;


int main()
{

 string s;
 while(cin>>s  && s != "sought"){}
 assert(cin);
//assert( 4 > 10 );
 cout<<"cin is not false, non zero " << endl;
 return 0;
}