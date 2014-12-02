#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int grade;

  cout << "input grade" << endl;
  cin >> grade;

  if(grade > 90 )
  {
   cout << "High pass " << endl;
  }else if ( grade < 60 )
          {
           cout << "fail " << endl;
          }else if ( grade <= 75)
                  {
                    cout << "low pass" << endl;
                  }else
                      {
                       cout << "middle pass " << endl;
                      }

return 0;
}