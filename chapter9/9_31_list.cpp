#include<iostream>
#include<list>

using namespace std;

int main() {

	list<int> aList = { 0,1,2,3,4,5,6,7,8,9 };

	auto iter = aList.begin();
	while ( iter != aList.end()) {
	
		if ((*iter) % 2) {
		   //����
			iter = aList.insert(iter, *iter); //���뵽��ǰiterָ���Ԫ��֮ǰ������ָ���²����Ԫ��
			advance(iter, 2); //���ԣ�Ҫ��������Ԫ�ز�ָ����һ��Ԫ��
		}
		else {
			iter = aList.erase(iter); //ɾ����ָ����һ��Ԫ��
		}
	}

	for (auto i : aList) cout << i << " ";

	return 0;
}

