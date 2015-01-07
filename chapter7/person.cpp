#include<iostream>
#include"Person.h"

istream &read(istream &is, Person &one)
{
	string name;
	string addr;
	
	is>>name>>addr;
	one.setName(name);
	one.setAddr(addr);
	
	return is;
	
}

ostream &print(ostream &os, Person &one)
{
	os<<"Name:"<<one.getName()<<endl;
	os<<"Addr:"<<one.getAddr()<<endl;
	
	return os;
}