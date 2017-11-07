#include<iostream>
#include<map>
#include<string>


using namespace std;

int main(){
	
	map<int,string> oneMap;
	oneMap[25] = "Albert";
	
	map<int,string>::iterator it = oneMap.begin();
	it->second = "Wang";
	
	
    map<int,string>::iterator oneIt = oneMap.begin();
	
	cout << oneIt->second<< endl;
	cout << oneMap[25] << endl;
	
	return 0;
}