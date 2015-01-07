#ifndef PERSON_H
#define PERSON_H

#include<string>
#include<iostream>

using std::string;

using std::ostream;
using std::istream;
using std::endl;

class Person{
	
	public:
	
	Person(const string iName, const string iAddr):name(iName),addr(iAddr){}
	
	//const 表明，调用该函数时，不修改当前对象的内容
	string getName() const{
		
		return name;
	}
	
	string getAddr() const {
		
		return addr;
	}
	
	void setName(string name){
		
		(*this).name = name;
	}
	
	void setAddr(string addr){
		
		(*this).addr = addr;
	}
	
	private:
	
	string name;
	string addr;
};
istream &read(istream &is, Person &one);
ostream &print(ostream &os, Person &one);




#endif