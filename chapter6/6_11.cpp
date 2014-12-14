#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void reset(double &d)
{

  d = 12.6;
}

int main()
{
  double value;
  cout << "Value:"<<endl;
  cin >> value;

   reset(value);
  cout<<"Reset result:"<<value<<endl;

return 0;
}