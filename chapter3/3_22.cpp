#include<iostream>
#include<string>
#include<cctype>

using std::cout;
using std::endl;
using std::string;

int main()
{
 string value = "someone like to program in cpp.";
  
cout << "orignal:" + value << endl;
 for( auto it = value.begin(); it != value.end() && !isspace(*it);it++)
{
  (*it) = toupper(*it); 
}

cout << value << endl;

return 0;

}