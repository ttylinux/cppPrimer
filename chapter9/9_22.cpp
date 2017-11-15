#include <iostream>
#include <vector>
using std::vector;

void insertDoubleValue(vector<int>& iv, int some_val)
{
	auto cursor = iv.size() / 2;
	auto iter = iv.begin(), mid = iv.begin() + cursor;
	while (iter != mid) {  //��һ��vector���飬��Ϊ���룬ֻ������ߵ�һ�룬��begin��mid
		if (*iter == some_val) {  //���ҵ�Ŀ������ʱ����Ŀ������ǰ��(����)������һ���µ�Ԫ�أ��µ�Ԫ�ص�ֵΪ2*some_val
			                     //insertִ����֮�󣬷��ص���ָ���²����Ԫ�ص�iter
			                    
			iter = iv.insert(iter, 2 * some_val);
			++iter;             //���ұ��ƶ�һ��λ��
			++cursor;           //������һ���µ�Ԫ�أ��м�λ��ҲҪ�޸�
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