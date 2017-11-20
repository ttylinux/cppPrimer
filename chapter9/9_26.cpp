#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main() {

	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	vector<int> aVec(ia, end(ia));
	list<int>  aList(aVec.begin(), aVec.end());

	

	for (auto it = aVec.begin(); it != aVec.end();) {
	
		if ((*it) % 2 == 0) {
			it = aVec.erase(it);
		}
		else {
			++it;
		}
	}

	for (auto it = aList.begin(); it != aList.end();) {

		if ((*it) % 2 != 0) {
			it = aList.erase(it);
		}
		else {
			++it;
		}
	}

	//print:
	cout << "aVec:" << endl;
	for (auto i : aVec)
		cout << i << " ";

	cout << endl<<"aList:" << endl;
	for (auto i : aList)
		cout << i << " ";
	cout << endl;


	return 0;
}