#ifndef SALES_DATA_H
#define SALES_DATA_H
#include<string>
#include<iostream>

using std::istream;
using std::ostream;
using std::string;

struct Sales_data{

   std::string bookNo;
   unsigned units_sold = 0;
   double revenue = 0.0;

   Sales_data &combine(const Sales_data&);
   //const 表示isbn是常量成员函数；表示this是一个指向常量的指针
   string isbn() const { return this->bookNo;}
   
};

istream &read(istream &is, Sales_data &item);
ostream &print(ostream &os, const Sales_data &item);

#endif