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

for(int i = 0; i < v2.size(); i++)
{

cout << v2[i] << endl;
}


vector<int> v3(10,42);
cout<<"v3 values: "<<endl;
for(int i = 0 ; i < v3.size(); i++)
{
  cout << v3[i] << endl;
}

vector<int> v4{10};
cout<<"v4 values:"<<endl;
for(int i = 0; i < v4.size(); i++)
{
   cout << v4[i] << endl;
}

vector<int> v5{10,42};
cout << "v5 values:"<<endl;
for(int i = 0; i < v5.size(); i++)
{
  cout << v5[i] << endl;
}

vector<string> v6{10};
cout << "v6 values:"<<endl;
for(int i = 0; i < v6.size(); i++)
{
  cout << v6[i] << endl;
}

vector<string> v7{10,"hi"};
cout << "v7 values:"<<endl;
for(int i = 0; i < v7.size(); i++)
{
  cout << v7[i] << endl;
}

return 0;

}