#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>

// Exercise 11.4
//Example, example, example. 递增相同的计数器
//做法：所有单词输入，都变为小写，都移除小数点，处理完之后，用该改变过的单词，作为键，增加计数
void word_count_pro(std::map<std::string, int>& m)
{
    std::string word;
    while (std::cin >> word) {
        for (auto& ch : word) ch = tolower(ch);
        word.erase(std::remove_if(word.begin(), word.end(), ispunct),
                   word.end());
        ++m[word];
    }
    for (const auto& e : m) std::cout << e.first << " : " << e.second << "\n";
}


int main()
{
    std::map<std::string, int> m;
    word_count_pro(m);

    return 0;
}