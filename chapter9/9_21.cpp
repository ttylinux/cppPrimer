#include<iostream>
#include<string>
#include<list>


using namespace std;

int main() {

	list<string> lst;
	auto iter = lst.begin();
	string word;
	while (cin >> word) {
		iter = lst.insert(iter, word);  // 等价于调用push_front
	}
	//0.iter被初始化为lst.begin(),指向第一个元素的迭代器
	//1. 第一次调用insert会将读入的元素插入到iter所指向的元素之前的位置
	//2.执行完insert，会返回指向新插入的元素，也就是iter指向此时的lst的首元素
    //3.然后，读入新的元素，执行insert，会将元素插入到当前iter指向的元素之前的位置
	for (auto iter = lst.cbegin(); iter != lst.cend(); iter++) {
		cout << *iter << endl;
	}


}