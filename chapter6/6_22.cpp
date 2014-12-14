#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void exchange(int *(&a), int *(&b))
{
  int *temp = a;
  a = b;
  b = temp;

}

int main()
{
  int one;
  int two; 

  int *a;
  int *b;

cout<<"one:";
cin >> one;
cout<<endl;
cout<<"two:";
cin>>two;
cout<<endl;
 
 a = &one;
 b = &two;

  exchange(a,b);
  cout<<"exchang them"<<endl;
  cout<<"one:"<<(*a)<<endl;
  cout <<"two:"<<(*b)<<endl;
 

return 0;
}