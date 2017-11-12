#include <iostream>
#include <sstream>
using std::istream;

istream& func(istream& is)
{
	//save data to string buffer;
	// then print it out
    std::string buf;
    while (is >> buf) std::cout << buf << std::endl;
    is.clear();
    return is;
}

int main()
{
	//istringstream  is a stream read data from string
	//separted by blank
    std::istringstream iss("hello String Data,de");
    func(iss);
    return 0;
}