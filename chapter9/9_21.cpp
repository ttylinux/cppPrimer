#include<iostream>
#include<string>
#include<list>


using namespace std;

int main() {

	list<string> lst;
	auto iter = lst.begin();
	string word;
	while (cin >> word) {
		iter = lst.insert(iter, word);  // �ȼ��ڵ���push_front
	}
	//0.iter����ʼ��Ϊlst.begin(),ָ���һ��Ԫ�صĵ�����
	//1. ��һ�ε���insert�Ὣ�����Ԫ�ز��뵽iter��ָ���Ԫ��֮ǰ��λ��
	//2.ִ����insert���᷵��ָ���²����Ԫ�أ�Ҳ����iterָ���ʱ��lst����Ԫ��
    //3.Ȼ�󣬶����µ�Ԫ�أ�ִ��insert���ὫԪ�ز��뵽��ǰiterָ���Ԫ��֮ǰ��λ��
	for (auto iter = lst.cbegin(); iter != lst.cend(); iter++) {
		cout << *iter << endl;
	}


}