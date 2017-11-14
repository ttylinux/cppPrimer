#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> vec(10);
	vector<int> vecTwo(10, 1);


	cout << "vec(10) value" << endl;
	for (int i = 0; i < vec.size(); i++) {
	
		cout << vec[i] << endl;
	}
	cout << "vec(10,1)" << endl;
	for (int i = 0; i < vecTwo.size(); i++) {
	
		cout << vecTwo[i] << endl;
	}


	return 0;
}