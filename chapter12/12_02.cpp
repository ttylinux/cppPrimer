#include "12_02.h"
#include <iostream>

int main()
{
	const StrBlob csb{ "hello", "world", "pezy" };
	StrBlob sb{ "hello", "world", "Mooophy" };

	//csb.back() = "Moophy"; back�ǳ������������س���str�����ܱ��޸�
	std::cout << csb.front() << " " << csb.back() << std::endl;
	sb.back() = "pezy";
	std::cout << sb.front() << " " << sb.back() << std::endl;
}