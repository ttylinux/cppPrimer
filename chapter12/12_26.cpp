#include <iostream>
#include <string>
#include <memory>

void input_reverse_output_string(int n)
{
	std::allocator<std::string> alloc;
	auto const p = alloc.allocate(n);  //分配n个string
	std::string s;
	auto q = p;   //从分配的第一个元素开始，读入的信息，用来构造string对象
	while (std::cin >> s && q != p + n) alloc.construct(q++, s);

	//q指向的是构造对象的后一个位置,所以，要先递减，然后再使用指针访问
	while (q != p) {
		std::cout << *--q << " ";
		alloc.destroy(q);
	}
	alloc.deallocate(p, n);
}

int main()
{
	input_reverse_output_string(10);
}