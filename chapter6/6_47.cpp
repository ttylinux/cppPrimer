#include<iostream>
#include<vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;


void display(vector<int> v,int i)
{
   if(i != v.size()){

     cout << v[i++]<<endl;
      display(v,i);
    }

}

int main()
{
   vector<int> one = {1,2,34,4,5,64,6,4};

   #ifndef NDEBUG
   
    cout<<"size of vector is :"<<one.size()<<endl;
   #endif

   display(one,0);
  
return 0;
}