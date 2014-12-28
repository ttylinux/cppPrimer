#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::endl;

using std::string;

/*
constexpr bool isShorter(const string &s1, const string &s2)
{

   return s1.size() < s2.size();

}
*/


int main()
{
  string one = "Abc";
  string two = "Abcs3";
  constexpr bool test= false;

  cout << one+"is shorter than "+two +"?"<<endl;
  //cout << isShorter(one,two)<<endl;  
  return 0;
}