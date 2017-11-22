#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

	vector<string> aVec;
	string word;

	while (cin >> word)
	{
		aVec.push_back(word);
		cout << "capacity: " << aVec.capacity() << endl;

	}

	return 0;
}