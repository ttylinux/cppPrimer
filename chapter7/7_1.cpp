#include<iostream>
#include"Sales_data.h"

using std::cout;
using std::cin;
using std::endl;
using std::cerr;

int main(){

  Sales_data total;
  
  if(read(cin,total)){
	  
	  Sales_data trans;
	  while(read(cin,trans)){
		  
		  if(total.bookNo == trans.bookNo){
			  total.units_sold += trans.units_sold;
			  total.revenue += trans.revenue;
			  
		  }else{
			  
			  print(cout,total) << endl;
			  total = trans;
		  }
	  }
	  
	  print(cout,total) << endl;
	  
  }else{
	  
	  cerr << "No data ?! " << endl;
  }  

}