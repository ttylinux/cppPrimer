#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	std::vector<int> iv = { 0,1,2,3,4,5,6,7,8,9 };
	auto iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
	for (int count = 50; count; --count)
	{
		iv.insert(iter, -1);
		std::cout << "capacity = " << iv.capacity() << " *mid = " << *mid << std::endl;
	}
	return 0;
}