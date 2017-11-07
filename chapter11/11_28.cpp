#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	
	
	map<string,vector<int>> oneMap;
	
	oneMap= {{"Alan",
          {
              1, 2, 3, 4, 5,
          }},
         {"John", {1, 5, 6, 7, 8}}
		 };
		 
		 
    std::map<std::string, std::vector<int>>::iterator it;
    it = oneMap.find("Alan");	 
		 
    cout<<"key:"<<it->first<<endl;
	cout<<"values:"<<endl;
	vector<int> vec = it->second;
	for(auto e : vec){
		cout <<e << endl;
	}
		
	return 0;
}