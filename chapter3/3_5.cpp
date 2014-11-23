#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
  string resultOne;
  string resultTwo;
  string value;

  while (cin >> value)
  {

   resultOne = resultOne + value;
   resultTwo = resultTwo + value + "  ";
  }
 
  cout << "resultOne: " << resultOne<<endl;
  cout <<"resultTwo:"<<resultTwo << endl;




 return 0;
}
