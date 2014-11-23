#include<iostream>
#include<cstring>

using std::cout;
using std::cin;
using std::endl;

int main()
{
 const char one[] = {'a','b','2','\0'};
 const char two[] = {'d','s','3','\0'};
 char large[30];

 strcpy(large,one);
 strcat(large,two);

 cout << large << endl;
 


return 0;
}