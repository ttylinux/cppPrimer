#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {

	vector<string> vec;
	auto iter = vec.begin();
	string word;
	while (cin >> word) {
		iter = vec.insert(iter, word);  // �ȼ��ڵ���push_front
	}
	//0.iter����ʼ��Ϊlst.begin(),ָ���һ��Ԫ�صĵ�����
	//1. ��һ�ε���insert�Ὣ�����Ԫ�ز��뵽iter��ָ���Ԫ��֮ǰ��λ��
	//2.ִ����insert���᷵��ָ���²����Ԫ�أ�Ҳ����iterָ���ʱ��lst����Ԫ��
	//3.Ȼ�󣬶����µ�Ԫ�أ�ִ��insert���ὫԪ�ز��뵽��ǰiterָ���Ԫ��֮ǰ��λ��
	for (auto iter = vec.cbegin(); iter != vec.cend(); iter++) {
		cout << *iter << endl;
	}

	return 0;
}

