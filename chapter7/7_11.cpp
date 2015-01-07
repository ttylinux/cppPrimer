#include<iostream>
#include"Sales_data.h"

using std::cout;
using std::cin;
using std::cerr;

int main(){

 Sales_data one;
 Sales_data two;
 Sales_data third;

 one = Sales_data();
 two = Sales_data("bookNo1");
 third = Sales_data("bookNo2", 3,4.2);
  
 print(cout, one);
 print(cout,two);
 print(cout,third);

  
return 0;

}