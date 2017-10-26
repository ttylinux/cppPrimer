#include <iostream>
#include <string>
#include<vector>
#include<utility>
#include<map>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::pair;
using std::make_pair;
using std::map;


int main(){
	std::map<std::string, std::vector<pair<string, string>>> members;
	pair<string,string> one = make_pair("Peter","1993-02-13");
	pair<string,string> two = make_pair("Peter2","1995-12-13");
	pair<string,string> three = make_pair("John","2005-12-13");
	
	std::vector<pair<string,string>>  peterLastName;
	peterLastName.push_back(one);
	peterLastName.push_back(two);
	members.insert({"peterLN",peterLastName});
	
	
	
	std::vector<pair<string,string>>  johnLN;
	johnLN.push_back(three);
	members.insert({"JohnLN",johnLN});
	//addNewMemberToFamily(members,"peter", make_pair("one","one"));

	
	  for (const auto& e : members){ 
		  std::cout << e.first << "\n";
		  std::vector<pair<string,string>> vect = e.second;
		  cout<<"size:"<<vect.size()<<endl;
		  for(pair<string,string> child : vect){
			  
			  std::cout<< child.first << ", birthday:"<<child.second<<"\n";
		  }
	  }
	  
	  cout<<"in the end, main"<<endl;
}