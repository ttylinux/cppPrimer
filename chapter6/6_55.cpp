#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;

using std::vector;

using f = int (*)(int, int);

//指向函数的的指针类型

int add(int one, int two)
{

  return one+two;
}

int minus(int one, int two)
{

  return one-two;
}

int times(int one, int two)
{

  return one*two;
}

int divid(int one, int two)
{

 return one/two;
}



int main(){

vector<f> fList;

fList.push_back(add);
fList.push_back(minus);
fList.push_back(times);
fList.push_back(divid);

cout << "15, 3 :" << endl;
for(f one: fList)
{
  
  cout << one(15,3) << endl;

}
 

return 0;
}