#include<iostream>
#include<string>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
 string str = "abcd";

 vector<int> one;
 one.push_back(3);
 one.push_back(4);

cout << "size of one:"<<sizeof(one)<<endl;
cout << "size of str:"<< sizeof(str)<<endl;
cout << "size of char:"<<sizeof(char)<<endl; 
cout<<"size of int: " << sizeof(int)<<endl;
cout <<"size of long:"<<sizeof(long)<<endl;
cout <<"size of double:"<<sizeof(double)<<endl;
 
return  0;
}