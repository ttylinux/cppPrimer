//to see how the compiler deal with error

#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool str_subrange(const string &str1, const string &str2)
{

   if(str1.size() == str2.size())
        return str1 == str2;


     auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();

     for(decltype(size) i = 0; i != size; ++i){

         if(str1[i] != str2[i] )
             return false;
      }
	  
	  return true;

}

int main()
{
  string one = "one";
  string two = "Two";



  if( str_subrange(one, two)){

     cout <<"subrange relationship."<<endl;
   }else{

    cout <<"does not have subrange relationship."<<endl;
   }

  return 0;
}
