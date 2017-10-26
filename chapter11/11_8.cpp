#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include<vector>
#include<set>


using std::string;
using std::vector;
using std::cout;
using std::endl;
using std::set;



void saveToVecWithNoduplication(std::vector<string> &ver,std::string str){
	
	if(std::find(ver.begin(), ver.end(), str) != ver.end()){
		cout<<"exclud " << str<< endl;
	}else{
		ver.push_back(str);
	}	
}

int main(){
	
	std::vector<string> onevec;
	onevec.push_back("one");
	onevec.push_back("two");
	onevec.push_back("three");
	
	saveToVecWithNoduplication(onevec,"one");
	saveToVecWithNoduplication(onevec,"two");
	saveToVecWithNoduplication(onevec,"five");
	
	
	for(auto e : onevec){
		cout << e <<"\n" << endl;
	}
	
	std::set<string> strSet;
    strSet.insert("one");
	strSet.insert("two");
	strSet.insert("three");
	strSet.insert("one");
	set<string>::iterator  setIt = strSet.begin();
	while(setIt != strSet.end()){
		
		cout<<*setIt<<endl;
		++setIt;
	}
	
	return 0;
}

