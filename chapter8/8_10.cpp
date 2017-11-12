#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::ifstream;
using std::istringstream;
using std::cout;
using std::endl;
using std::cerr;

int main()
{
    ifstream ifs("infos.txt");
    if (!ifs) {
        cerr << "No data?" << endl;
        return -1;
    }

    vector<string> vecLine;
    string line;
    while (getline(ifs, line)) vecLine.push_back(line); // one line

    for (auto& s : vecLine) {
        istringstream iss(s);
        string word; // read word by word, one word is separted by blank space
        while (iss >> word) cout << word << endl;
    }

    return 0;
}