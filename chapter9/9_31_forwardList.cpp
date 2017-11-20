#include<iostream>
#include<forward_list>

using namespace std;

int main() {

	forward_list<int> vi = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	auto iter = vi.begin(), prev = vi.before_begin();//指向首元素之前的位置
	while (iter != vi.end()) {
		if (*iter % 2) {
			iter = vi.insert_after(prev, *iter);//插入到prev之后；返回的iter，指向插入后的元素
			advance(iter, 2);
			advance(prev, 2);
		}
		else
			iter = vi.erase_after(prev);
	}

	for (auto i : vi) cout << i << " ";

	return 0;


	return 0;
}