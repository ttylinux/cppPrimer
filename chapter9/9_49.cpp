#include <string>
#include <fstream>
#include <iostream>

using std::string;
using std::ifstream;
using std::cout;
using std::endl;

int main()
{

	//word.find_first_not_of("aceimnorsuvwxz"),查找word中，不是"aceimnorsuvwxz"字符的第一个字符，也就是找到非指定字符
	//如果找到，返回的不是npos；找不到，也就是word中包含了字符"aceimnorsuvwxz"中的任何一个，找不到，返回npos
	//这样，当返回npos，说明word中包含了"aceimnorsuvwxz"

	ifstream ifs("letters.txt");
	if (!ifs) return -1;
	string longest_word;
	for (string word; ifs >> word;)
		if (word.find_first_not_of("aceimnorsuvwxz") == string::npos &&
			word.size() > longest_word.size())
			longest_word = word;

	cout << longest_word << endl;
}


