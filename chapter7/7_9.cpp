#include<iostream>
#include"Person.h"

using std::cout;
using std::cin;
using std::endl;
using std::cerr;


int main(){
	
	Person one;
	if(read(cin,one)){
		
		print(cout,one);
		
	}else{
		cerr << "No data ?! " << endl;
	}
	
	return 0;
}