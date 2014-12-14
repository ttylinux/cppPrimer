#include<iostream>


using std::cout;
using std::cin;
using std::endl;

int main(int argc, char* *argv)
{
   for(int i = 0; i < argc;i++)
    {
     cout <<*(argv++)<<endl;
    }

return 0;
}