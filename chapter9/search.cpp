#include <iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

int main(){
	
	string  numbers("0123456789"), name("r2d2");
	auto pos = name.find_first_of(numbers); // 在name中查找numbers中任何一个字符第一次出现的位置;被搜索的对象是name，搜索参数是numbers中任何一个字符
	cout << pos << endl;
	
	string dept("03714p3");
	auto   pos2 = dept.find_first_not_of(numbers); // 在dept中查找，第一个不在numbers中出现的字符
	cout << pos2 << endl;
	
	return 0;
	
}