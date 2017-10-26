#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>
#include<vector>


using std::string;

void addNewMemberToFamily(std::map<std::string, std::vector<string>>& m,std::string familyName, std::string child){
	
	std::vector<string> oneFamily = m[familyName];

	oneFamily.push_back(child);
	m[familyName] = oneFamily;
	
	
}

int main(){
	std::map<std::string, std::vector<string>> members;
	addNewMemberToFamily(members,"peter", "child_peter");
	addNewMemberToFamily(members,"peter", "child_peter2");
	addNewMemberToFamily(members,"peter", "child_peter3");
	addNewMemberToFamily(members,"john","child_john");
	
	  for (const auto& e : members){ 
		  std::cout << e.first << "\n";
		  std::vector<string> vect = e.second;
		  for(string child : vect){
			  
			  std::cout<< child << "\n";
		  }
	  }
	  
	
}