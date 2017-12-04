#include "12_19.h"
#include <fstream>
#include <iostream>

int main()
{
	std::ifstream ifs("book.txt");
	StrBlob blob;
	for (std::string str; std::getline(ifs, str);) 
		blob.push_back(str);

	StrBlobPtr pbeg(blob.begin()), pend(blob.end());
	if (pbeg != pend) {
		std::cout << "not equal" << std::endl;
	}
	//bool operator!=(const StrBlobPtr& p) { return p.curr != curr; };重载不等于操作符,只是比较vector的索引位置
	for (StrBlobPtr pbeg(blob.begin()), pend(blob.end()); pbeg != pend;pbeg.incr())
		std::cout << pbeg.deref() << std::endl;



}