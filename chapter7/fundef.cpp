#include<iostream>
#include"Sales_data.h"
istream &read(istream &is, Sales_data &item){
	
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price*item.units_sold;
	
	return is;
}

ostream &print(ostream &os, const Sales_data &item){
	
	os << item.bookNo<<"  " << item.units_sold << "  " << item.revenue;
	return os;
}