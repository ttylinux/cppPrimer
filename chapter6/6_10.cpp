#include<iostream>

using std::cout;
using std::cin;
using std::endl;

void change(int *one, int *two)
{
  int temp = (*one);
  (*one) = (*two);
  (*two) = temp; 
}


int main()
{
  int one =10;
  int two = 100;

  cout <<"one:"<<one<<endl;
  cout <<"two:"<<two<<endl;
  change( &one, &two);
  cout << " new : " << endl;
  cout <<"one:"<<one<<endl;
  cout <<"two:"<<two<<endl;
    


return 0;
}