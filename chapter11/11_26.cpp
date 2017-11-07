#include <vector>
#include <string>
#include <iostream>
#include<map>


using namespace std;

int main(){

std::map<int, std::string> map = {{1, "ss"}, {2, "sz"}};
std::map<int, std::string>::key_type type_to_subscript = 1;

std::map<int, std::string>::mapped_type type_to_return = map[type_to_subscript];


cout<< type_to_return<< endl;  //打印输出是ss,输出的是值
  
return 0;

}





