#include<iostream>
#include<list>

using namespace std;

int main() {

	list<int> aList = { 0,1,2,3,4,5,6,7,8,9 };

	auto iter = aList.begin();
	while ( iter != aList.end()) {
	
		if ((*iter) % 2) {
		   //奇数
			iter = aList.insert(iter, *iter); //插入到当前iter指向的元素之前；返回指向新插入的元素
			advance(iter, 2); //所以，要跳过两个元素才指向下一个元素
		}
		else {
			iter = aList.erase(iter); //删除后，指向下一个元素
		}
	}

	for (auto i : aList) cout << i << " ";

	return 0;
}

