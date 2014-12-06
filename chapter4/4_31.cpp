#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;

using std::vector;

int main()
{

 int ivec[] = {3,4,5};
 int nivec[] = {3,4,5};

vector<int>::size_type cnt = 3;
for(vector<int>::size_type ix = 0; ix != 3; ++ix, --cnt)
   ivec[ix] = cnt;

for(int one: ivec)
cout << one << endl;


vector<int>::size_type ncnt = 3;
for(vector<int>::size_type ix = 0; ix != 3; ix++, ncnt--)
   nivec[ix] = ncnt;

  for(int one:nivec)
  cout<< one << endl;


return 0;
}