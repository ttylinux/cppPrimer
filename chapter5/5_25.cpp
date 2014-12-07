#include<iostream>
#include<stdexcept>


using std::cout;
using std::cin;
using std::endl;
using std::runtime_error;
int main()
{
 int one;
 int two;

while(true){
 try{
   cout <<"Input two value: " << endl;
   cin >> one >> two;
   if( two == 0 )
    throw  runtime_error("divisor can not be zero!");
   cout << one/two << endl;
  
 }catch ( runtime_error e){

     cout << e.what()<<" error, retry : y or n " << endl;
     char c;
     cin >> c;
     if ( c == 'n'){

      break; 
    }
  }

}

return 0;
}