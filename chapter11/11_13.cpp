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


void addPairToVectV1(string str, int intValue, vector<pair<string,int>> &pairVect){
	
	pairVect.push_back({str,intValue});
}


void addPairToVectV2(string str, int intValue, vector<pair<string,int>> &pairVect){
	
	pairVect.push_back(make_pair(str,intValue));
}

void addPairToVectV3(string str, int intValue, vector<pair<string,int>> &pairVect){
	
	pairVect.push_back(pair<string,int>(str,intValue));
}

int main(){
	
	std::vector<pair<string,int>> vec;
	
	addPairToVectV1("one",1,vec);
	addPairToVectV2("two",2,vec);
	addPairToVectV3("three",3,vec);
	
	for(auto e: vec){
		
		cout<<e.first<<";"<<e.second<<endl;
	}
	
	
	
	return 0;
}
