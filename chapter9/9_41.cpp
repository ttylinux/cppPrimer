#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

	vector<char> chars = { 'p','e','t','e','r' };
	string str(chars.begin(), chars.end());

	cout << str << endl;

 
	return 0;
}