#include<iostream>
#include<string>
#include<list>
#include<deque>


using namespace std;

int main() {

	list<int> aIntList = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13 };
	deque<int> evenDeque;
	deque<int> oddDeque;
	deque<int> testDeque;

	for (auto iter = aIntList.cbegin(); iter != aIntList.cend(); iter++) {

		if ((*iter) % 2 == 0) {
		
			evenDeque.push_back((*iter));
		}
		else {
		
			oddDeque.push_back((*iter));
		}
	}

	cout << "evenData:" << endl;
	for (auto iter = evenDeque.cbegin(); iter != evenDeque.cend(); iter++) {
		cout << *iter << endl;
	}

	cout << "oddData:" << endl;
	for (auto iter = oddDeque.cbegin(); iter != oddDeque.cend(); iter++) {
	
		cout << *iter << endl;
	}

	for (auto iter = testDeque.cbegin(); iter != testDeque.cend(); iter++) {
	}

	return 0;
}