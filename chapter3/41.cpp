#include<iostream>
#include<iterator>
#include<vector>

using std::cin;
using std::cout;
using std::endl;

using std::vector;
using std::begin;
using std::end;


int main()
{
 int array[10] = { 1,3,32,23,45,22,44};
 vector<int> one(begin(array),end(array));

  cout << " vector result:"<<endl;
  for(int value : one)
  {
   cout << value << endl;
  }


int arrNew[10] = {};
for(int i = 0; i < one.size(); i++)
{
  arrNew[i] = one[i];
}

cout << "arrNew result:"<<endl;
for(int i =0 ; i < 10; i++)
{
cout << arrNew[i] << endl;
}


return 0;
}