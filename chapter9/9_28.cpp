#include<iostream>
#include<forward_list>
#include<string>

using namespace std;


void findAndReplace(forward_list<string> &oneList,string const &findStr, string const &replaceStr) {

	auto prev = oneList.before_begin();
	auto curr = oneList.begin();

	while (curr != oneList.end()) {

		if ((*curr) == findStr) {
			oneList.insert_after(curr, replaceStr);
			return;
		}
		else {
			prev = curr;
			curr++;
		}
	}
	oneList.insert_after(prev, replaceStr);
}


int main() {

	forward_list<string> oneStr = {"one","two","three","four","five","six"};
	findAndReplace(oneStr, "two", "2");
	findAndReplace(oneStr, "seven", "7");
	for (auto i : oneStr)
		cout << i << " ";


	return 0;
}