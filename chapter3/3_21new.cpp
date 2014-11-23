#include<iostream>
#include<vector>
#include<string>


using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{

vector<int> v2(10);
cout<<"v2 values:"<<endl;

for(auto it = v2.cbegin(); it != v2.cend(); it++)
{

cout << (*it) << endl;
}


vector<int> v3(10,42);
cout<<"v3 values: "<<endl;
for(auto it = v3.cbegin(); it!=v3.cend(); it++)
{
  cout << (*it) << endl;
}

vector<int> v4{10};
cout<<"v4 values:"<<endl;
for(auto it = v4.cbegin(); it != v4.cend(); it++)
{
   cout << (*it) << endl;
}

vector<int> v5{10,42};
cout << "v5 values:"<<endl;
for(auto it = v5.cbegin(); it != v5.cend(); it++)
{
  cout << (*it) << endl;
}

vector<string> v6{10};
cout << "v6 values:"<<endl;
for(auto it = v6.cbegin();it != v6.cend(); it++)
{
  cout << (*it) << endl;
}

vector<string> v7{10,"hi"};
cout << "v7 values:"<<endl;
for(auto it = v7.cbegin(); it != v7.cend(); it++)
{
  cout << (*it) << endl;
}

return 0;

}