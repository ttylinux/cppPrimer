#include<map>
#include<string>
#include<iostream>


using namespace std;

int main(){
	
	//定义一个multimap
	  std::multimap<string, string> authors{
		  {"alan", "DMA"}, {"pezy", "LeetCode"}, {"alan", "CLRS"},
        {"wang", "FTP"}, {"pezy", "CP5"},      {"wang", "CPP-Concurrency"}};
    // want to delete an element that author is [Alan], work is [112].
    string author = "pezy";
    string work = "CP5";
	
	auto found = authors.find(author); //查找author映射的所有元素，返回一个迭代器,指向第一个找到的元素
    auto count = authors.count(author); //查找author映射的元素的数量
    while (count) {
        if (found->second == work) {
            authors.erase(found);
            break;
        }
        ++found;
        --count;
    }

    for (const auto& author : authors)
        std::cout << author.first << " " << author.second << std::endl;
	

	return 0;
}