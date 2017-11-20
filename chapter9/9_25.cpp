#include<iostream>
#include<list>
#include<string>

using namespace std;

int main() {

	list<int> lst = {0,1,2,3,4,5,6,7,8,9};
	auto it = lst.begin();
	auto elem2 = lst.end();
	auto elem1 = lst.end();
	//lst.erase(it, it);  // delete nothing
	 //lst.erase(it, elem2);   // delete from  elements in range it to elem2
	lst.erase(elem2, elem1);  // delete nothing 
	for (auto i : lst) {
	
		cout << i << endl;
	}

	return 0;
}