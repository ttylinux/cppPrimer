#include <iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;

int main(){
	
	string s;
	const char * cp = "Stately, plump Buck";
	s.assign(cp,7);
	cout<<s << endl;
	s.insert(s.size(),cp+7);
	cout << s << endl;
	return 0;
	
}