#include<iostream>


int main()

{
 int i = 0, &r = i;

 auto a = r;

 const int ci = i, &cr = ci;

 auto b = ci;//b是一个int类型，忽略掉const
 auto c = cr; //c 是一个int类型，cr是一个指向const int变量的引用类型
              //决定类型的是cr所指向的变量的类型(const int)

 auto d = &i; //d是一个指向整形变量的指针，整形指针
 auto e = &ci; //e是一个指针；它指向的变量类型是const int，它是
               //一个指向整形常量的指针
 auto &g = ci; //g是一个引用，该引用指向的类型是const int
               //g指向ci所指向的const int 变量
               //g是一个整形常量引用，它指向的变量，变量包含的值
               //不可修改。

 a = 42;
 b = 42;
 c = 42;
 d = 42;
 e = 42;
 g = 42;

 std::cout<<"a:"<<a<<std::endl;
 std::cout <<"b:"<<b<<std::endl;
 std::cout <<"c:"<<c<<std::endl;
 std::cout <<"d:"<<d<<std::endl;
 std::cout<<"e:"<<e<<std::endl;
 std::cout<<"g:"<<g<<std::endl;




 return 0;
}