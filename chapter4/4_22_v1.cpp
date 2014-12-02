#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
  int grade;

  cout << " input grade : " << endl;
  cin >> grade;

  string str = (grade > 90) ? "High pass" : ( (grade<60)? "fail" : ( (grade<=75) ? "low pass" : "middle pass"));
  cout << str << endl;
  

return 0;
}