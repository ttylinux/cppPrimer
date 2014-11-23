#include<iostream>
#include<vector>


using std::cout;
using std::cin;
using std::vector;
using std::endl;

int main()
{
  vector<int> array = {8,10,34,5,12,3,2,200,43,22};

  cout<<"orginal:"<<endl;
  for( int i : array)
  cout << i << endl;

  for( auto it = array.begin(); it != array.end();it++)
  {
     (*it) = (*it)*(*it);
   }

 cout << " new:"<<endl;
 for( int i : array)
 cout << i << endl;

return 0;

}