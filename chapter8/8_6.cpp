#include <fstream>
#include <iostream>

#include "sales_data.h"
using std::ifstream;
using std::cout;
using std::endl;
using std::cerr;


// read book datas from a file
// format read into Sales_data
//print result
int main(int argc, char** argv)
{
    ifstream input(argv[1]); //file input stream

    Sales_data total; //read data from terminal
    if (read(input, total)) {
        Sales_data trans;
        while (read(input, trans)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }
    else {
        cerr << "No data?!" << endl;
    }

    return 0;
}