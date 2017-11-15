#include<iostream>
#include<string>
#include<deque>

using namespace std;

int main() {

	deque<string> aDeque;
	for (string str; cin >> str; aDeque.push_back(str));

	for (auto iter = aDeque.cbegin(); iter != aDeque.cend(); ++iter) {
	  
		cout << *iter << endl;
	}
	return 0;
}