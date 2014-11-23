#include<iostream>
#include<string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

int main()
{
   string one,two;

   cout << "Input the two compare str: " << endl;

   cin >> one >> two;

   auto size_one = one.size();
   auto size_two = two.size();

   if (size_one == size_two)
      {
        
      cout << "They are equal." << endl;
      }else if ( size_one > size_two)
            {
            cout << one << " is longer than " << two << endl;
            }else
                 {
                cout << two << " is longer than " << one <<endl;
                 }

 return 0;
}