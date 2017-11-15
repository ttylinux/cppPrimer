#include<iostream>
#include<list>
#include<string>

using namespace std;

int main() {

	list<string> aList;
	for (string str; cin >> str; aList.push_back(str));

	for (auto iter = aList.cbegin(); iter != aList.cend(); iter++) {
	
		cout << *iter << endl;
	}

	return 0;
}