#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
#include<iostream>

using std::istream;
using std::ostream;
struct Sales_data{

   std::string bookNo;
   unsigned units_sold = 0;
   double revenue = 0.0;

   
};

istream &read(istream &is, Sales_data &item);
ostream &print(ostream &os, const Sales_data &item);

#endif