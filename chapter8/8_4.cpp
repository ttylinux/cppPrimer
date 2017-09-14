#include<fstream>
#include<string>
#include<vector>
#include<iostream>
#include<sstream>

using std::vector;
using std::string;
using std::ifstream;
using std::istringstream;
using std::cout;
using std::endl;


void readFileToVec(const string & fileName, vector<string> & vec) {

	ifstream  ifs(fileName, ifstream::in);

	if (ifs) {

		string buf;
		while (std::getline(ifs,buf))
		{
			vec.push_back(buf);
		}
	}

}

int main() {

	vector<string> vec;

	readFileToVec("data.txt", vec);
     int size = vec.size();
	for (int i = 0; i < size; i++) {
	
		cout << vec[i] << endl;
	}

	return 0;
}
