#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::istringstream;
using std::ostringstream;
using std::ifstream;
using std::cerr;
using std::cout;
using std::endl;
//using std::isdigit;

struct PersonInfo {
    string name;
    vector<string> phones;
};

bool valid(const string& str)
{
    return isdigit(str[0]);// only check the first character if valid 
}

string format(const string& str)
{
    return str.substr(0, 3) + "-" + str.substr(3, 3) + "-" + str.substr(6);
}

int main()
{
    ifstream ifs("phonenumbers.txt"); // read number from file
    if (!ifs) {
        cerr << "no phone numbers?" << endl;
        return -1;
    }

    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    while (getline(ifs, line)) {
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while (record >> word) info.phones.push_back(word);
        people.push_back(info);
    }

    for (const auto& entry : people) {
        ostringstream formatted, badNums;
        for (const auto& nums : entry.phones){
	//		cout <<" nums:"<<nums << endl;
	//		cout <<" names:"<<entry.name << endl;
			if (!valid(nums))
                badNums << " " << nums; // save data to badNums which are ostringstream
            else
                formatted << " " << format(nums); // save data to formatted which is ostringstream
		}
        if (badNums.str().empty())
            cout << entry.name << " " << formatted.str() << endl;
        else
            cerr << "input error: " << entry.name << " invalid number(s) "
                 << badNums.str() << endl;
    }

    return 0;
}

