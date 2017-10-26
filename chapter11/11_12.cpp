#include <iostream>
#include <string>
#include<vector>
#include<utility>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::pair;


void addPairToVect(string str, int intValue, vector<pair<string,int>> &pairVect){
	

	pairVect.push_back({str,intValue});
}


int main(){
	
	std::vector<pair<string,int>> vec;
	
	addPairToVect("one",1,vec);
	addPairToVect("two",2,vec);
	addPairToVect("three",3,vec);
	
	for(auto e: vec){
		
		cout<<e.first<<";"<<e.second<<endl;
	}
	
	
	
	return 0;
}
