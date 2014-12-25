#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;

using std::string;

int ff(int a, int b =0, int c = 0);
//char *init(int ht = 24, int wd, char bckgrnd);

string make_plural(size_t ctr, const string &word, const string ending = "s"){

return (ctr > 1) ? word+ending:word;

}

int main()
{


  cout << make_plural(2,"something") <<endl;
}