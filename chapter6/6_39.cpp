#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int * reset(int * one){

 return one;
}

double *reset(double *one){

return one;
}

int main(){

  double one = 13.5;
  int two = 50;

 cout <<*reset(&one) <<endl;
 cout <<*reset(&two)<<endl;

return 0;
}