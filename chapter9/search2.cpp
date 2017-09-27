#include <iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

int main(){
	
	string  numbers("0123456789"), name("r2d2");
	
	string::size_type pos = 0;
	//被搜索的对象是name,搜索参数是numbers;搜索顺序 name[pos]，查看是否在numbers中出现,出现就打印pos；name[1],name[3]，内容是数字2，都在numbers中出现
	while((pos = name.find_first_of(numbers,pos)) != string::npos){
		
		
		cout <<"found number at index:"<<pos << "  element is " << name[pos] << endl;
		++pos;
	}
	
   return 0;
}