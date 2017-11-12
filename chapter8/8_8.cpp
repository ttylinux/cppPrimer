#include <fstream>
#include <iostream>

#include "sales_data.h"

using std::ifstream;
using std::ofstream;
using std::endl;
using std::cerr;


int main(int argc, char** argv)
{
    ifstream input(argv[1]); // file input stream
    ofstream output(argv[2],ofstream::app);// file output stream,append data to a file

    Sales_data total;
    if (read(input, total)) {
        Sales_data trans;
        while (read(input, trans)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(output, total) << endl; // write data to file output stream
                total = trans;
            }
        }
        print(output, total) << endl;
    }
    else {
        cerr << "No data?!" << endl;
    }

    return 0;
}