#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main() {

	list<int> intList = {1,3,5};
	vector<int> intVec = { 6,9,10 };
	vector<double> doubleVec;
	vector<double> doubleVecTwo;

	doubleVec = vector<double>(intList.begin(), intList.end());

	doubleVecTwo = vector<double>(intVec.begin(), intVec.end());

	cout << "doubleVec value" << endl;
	for (int i = 0; i < doubleVec.size(); i++) {
		cout << doubleVec[i] << endl;
	}

	cout << " doubleVecTwo value " << endl;
	for (int i = 0; i < doubleVec.size(); i++) {
		cout << doubleVecTwo[i] << endl;
	}

	return 0;
}