#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::istringstream;


struct PersonInfo {
    string name;
    vector<string> phones;
};

int main()
{
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while (getline(cin, line)) {  // read from cin stream, save data to line
        PersonInfo info; // one person
        record.clear();
        record.str(line); // read string to istringstream
        record >> info.name; // one man has one name, and has many phone numbers
        while (record >> word) info.phones.push_back(word);
        people.push_back(info);
    }

    for (auto& p : people) {
        std::cout << p.name << " ";
        for (auto& s : p.phones) std::cout << s << " ";
        std::cout << std::endl;
    }

    return 0;
}


