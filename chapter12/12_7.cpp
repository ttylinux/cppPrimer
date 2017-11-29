#include <iostream>
#include <vector>
#include <string>
#include <memory>

std::shared_ptr<std::vector<int>>  dynamic_vector_generator();

void dynamic_vector_processor(std::shared_ptr<std::vector<int>> ptr_v);

void dynamic_vector_printer(std::shared_ptr<std::vector<int>> ptr_v);

int main()
{
	/**
	* testing the 3 functions
	*/
	std::shared_ptr<std::vector<int>>  ptr_vi = dynamic_vector_generator();
	dynamic_vector_processor(ptr_vi);
	dynamic_vector_printer(ptr_vi);

	

	return 0;
}

std::shared_ptr<std::vector<int>> dynamic_vector_generator()
{
	std::shared_ptr<std::vector<int>> ptr_v = std::make_shared<std::vector<int>>();
	return ptr_v;
}

void dynamic_vector_processor(std::shared_ptr<std::vector<int>> ptr_v)
{
	int i;
	std::cout << "plz enter:\n";
	while (std::cin >> i && i != 999) ptr_v->push_back(i);
}

void dynamic_vector_printer(std::shared_ptr<std::vector<int>> ptr_v)
{
	for (const auto& e : *ptr_v) std::cout << e << " ";
	std::cout << "\n";
}