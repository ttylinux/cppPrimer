#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main(){
	
	vector<int> v;
	
	 v.push_back(1); //执行这个插入操作之后，vector的空间大小会被初始化为一个默认值，那么v[1] = 3,就可以赋值成功，就可以执行
	//v[0] = 2;     //如果没有先执行push_back这个操作就执行v[0] = 2这个操作，那么会导致赋值失败，因为vector是空的
	 v[1] = 3;
	
	cout << v[0] << endl;
	cout << v[1] << endl;
	
	return 0;
}