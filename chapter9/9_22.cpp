#include <iostream>
#include <vector>
using std::vector;

void insertDoubleValue(vector<int>& iv, int some_val)
{
	auto cursor = iv.size() / 2;
	auto iter = iv.begin(), mid = iv.begin() + cursor;
	while (iter != mid) {  //将一个vector数组，分为两半，只查找左边的一半，从begin到mid
		if (*iter == some_val) {  //当找到目标数的时候，在目标数的前面(靠左)，插入一个新的元素，新的元素的值为2*some_val
			                     //insert执行完之后，返回的是指向新插入的元素的iter
			                    
			iter = iv.insert(iter, 2 * some_val);
			++iter;             //往右边移动一个位置
			++cursor;           //增加了一个新的元素，中间位置也要修改
			mid = iv.begin() + cursor;
		}
		++iter;
	}
}

void print(const vector<int>& iv)
{
	for (auto i : iv) std::cout << i << " ";
	std::cout << std::endl;
}

int main()
{
	vector<int> iv = { 1, 2, 1, 1, 1, 7, 1, 9 };
	insertDoubleValue(iv, 2);
	print(iv);

	vector<int> ivTwo = { 1, 1, 1, 1, 1, 7, 1, 9 };
	insertDoubleValue(ivTwo, 1);

	print(ivTwo);
}