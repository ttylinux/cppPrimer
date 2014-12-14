#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void exchange(int &a, int &b)
{
  int temp = a;
  
  a = b;
  b = temp;
}

int main()
{
  int a = 5, b = 13;
  cout << "a: "<<a<<endl;
  cout <<"b:"<<b<<endl;

  exchange(a,b);
  cout <<"a:"<<a<<endl;
  cout <<"b:"<<b<<endl;

return 0;
}