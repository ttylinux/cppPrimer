#include<iostream>

int main()
{

 const int i = 42;

 auto j = i;
 const auto &k = i;
 auto *p = &i;
 const auto j2 = i, &k2 = i;


 j = 50 ; //j是一个整形类型，忽略掉了i的const类型
 k = 50; //这个会报错，因为k指向的变量是整形常量，值是不能被修改的
 
const int one = 100;
k = one; //这个也会报错，因为k是一个常量引用，它的值不能被修改

j2 = 50; //这个会报错，因为j2是整形常量，值是不能被修改的

k2 = 50; //这个会报错，因为k2指向的是整形常量，值是不能被修改得
k2 = one; //这个会报错，因为k2是一个常量引用，值是不能被修改得


return 0;
}