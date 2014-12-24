#include<iostream>
#include<string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

//type first ---传统的C语言方式，数组名就是数组首元素的地址
string * getStr(string *one )
{
	return one;
}

//type second---类型别名方式
using strArray = string[10];
strArray  *getStrTwo(strArray *one)
{
	return one;
}

//type third---decltype方式
string third[10] = {};
decltype(third) * getStrThird(decltype(third)* one){
	
	return one;
}


int main()
{
  string one[10] = {"one","two","three"};
  string *temp;
  temp = getStr(one);
  cout<<"Type one:"<<endl;
 for(int i = 0; i < 3; i++){
  cout <<temp[i] << endl;
 }
 
 
  
  strArray two = {"oneU","twoU","threeU"};
  strArray *tempTwo;
  string *array;
  
  tempTwo = getStrTwo(&two);
  array = *tempTwo;
  cout<<"Type second:"<<endl;
 for(int i = 0; i < 3; i++){
	 
	 cout <<(*tempTwo)[i] << endl; 
	 cout<<*(array++)<<endl;
 }

 
 decltype(third) *tempThird;
 string three[10]={"oneD","twoD","threeD"};
 tempThird = getStrThird(&three);
 cout<<"Type third:"<<endl;
 for(int i = 0; i < 3; i++){ 
	 cout<<(*tempThird)[i]<<endl;
 }
 

return 0;
}
