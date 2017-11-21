#include<iostream>
#include<vector>

using namespace std;

int main() {

	vector<int> aVec = { 0,1,2,3,4,5 };

	aVec.insert(aVec.end(),6);
	//cout << *(aVec.end())<< endl;
	auto begin = aVec.begin();
	//while (begin != aVec.end()) {
	
		//++begin;
		//aVec.insert(begin, 42);
		// begin 指向一个无效的元素 
		//++begin; 
	//}

	while (begin != aVec.end()) {

		++begin;
		begin = aVec.insert(begin, 42);
		++begin;
	}
	//输出：0,42,

	for (auto i : aVec)
		cout << i << "  ";

	return 0;
}