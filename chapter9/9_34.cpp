#include<vector>
#include<iostream>

using namespace std;

int main() {


	vector<int> aVec = { 0,1,2,3 };
	int time = 0;
	int maxTime = 10;

	auto iter = aVec.begin();
	while (iter != aVec.end()) {
	
		if ((*iter) % 2) {
			iter = aVec.insert(iter, *iter);
		}
		++iter;
		if ((++time) == maxTime) {
			break;
		}
	}

	for (auto i : aVec)
		cout << i << "  ";

	cout << endl;

	return 0;
}