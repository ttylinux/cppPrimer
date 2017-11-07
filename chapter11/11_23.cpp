#include <map>
#include <string>
#include <iostream>

using std::string;

int main()
{
    std::multimap<string, string> families;
    for (string lastName, childName; std::cin >> childName >> lastName;
         families.emplace(lastName, childName)) //采用emplace
        ;
    for (const auto& s : families)
        std::cout << s.second << " " << s.first << std::endl;
}