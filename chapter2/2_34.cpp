#include<iostream>


int main()

{
 int i = 0, &r = i;

 auto a = r;

 const int ci = i, &cr = ci;

 auto b = ci;//b��һ��int���ͣ����Ե�const
 auto c = cr; //c ��һ��int���ͣ�cr��һ��ָ��const int��������������
              //�������͵���cr��ָ��ı���������(const int)

 auto d = &i; //d��һ��ָ�����α�����ָ�룬����ָ��
 auto e = &ci; //e��һ��ָ�룻��ָ��ı���������const int������
               //һ��ָ�����γ�����ָ��
 auto &g = ci; //g��һ�����ã�������ָ���������const int
               //gָ��ci��ָ���const int ����
               //g��һ�����γ������ã���ָ��ı���������������ֵ
               //�����޸ġ�

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