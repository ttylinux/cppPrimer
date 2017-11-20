#include<iostream>
#include<forward_list>

using namespace std;

int main() {

	forward_list<int> singleList = { 1,2,3,4,5,6,7,8,9,10 };

	auto prev = singleList.before_begin();
	auto curr = singleList.begin();

	while (curr != singleList.end()) {
	
		if ((*curr) % 2 != 0) {
		
			curr = singleList.erase_after(prev);
		}
		else {
		
			prev = curr;
			curr++;
		}
	}

	cout << "singleList: " << endl;
	for (auto i : singleList)
		cout << i << " ";

	cout << endl;

	return 0;
}