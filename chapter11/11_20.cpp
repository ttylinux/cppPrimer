#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
	
	map<string,size_t> wordCount;
	string word;
	
	while(cin >> word){
		
		auto e = wordCount.insert({word,1});
		if(!(e.second)){
			// already in the map,increase the amount
			++(e.first->second);
		}
	}
	
	for(const auto &e: wordCount){
		
		cout << e.first << "  occurs  "  <<e.second << " "<<((e.second> 1) ? "times" : "time") << endl;
 	}
	
	return 0;
	
}