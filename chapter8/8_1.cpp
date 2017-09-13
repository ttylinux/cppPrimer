#include<iostream>
using std::istream;

istream& read(istream& is) {

	char c;
	while (is >> c) {
	
		std::cout << c << std::endl;
	}
	is.clear();

	return is;
}

int main() {
	istream&  is = read(std::cin);

	return 0;
}